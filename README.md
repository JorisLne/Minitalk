<p align="center">
  <img 
    src="https://github.com/JorisLne/42-project-badges/blob/main/covers/cover-minitalk-bonus.png?raw=true" 
    alt="Bannière minitalk" 
    width="80%">
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Score-125%2F100-brightgreen?style=flat-square" alt="Score du projet 125/100" />
  <img src="https://img.shields.io/badge/Langage-C-blue.svg?style=flat-square&logo=c" alt="Langage C" />
</p>

<p align="center">
  <img src="https://github.com/JorisLne/42-project-badges/blob/main/badges/minitalkm.png?raw=true" alt="Badge minitalk">
</p>

---

# 📡 minitalk

---

## 🧠 Introduction

**minitalk** est un mini-protocole de communication entre un client et un serveur.  
Il repose uniquement sur des **signaux UNIX (SIGUSR1 et SIGUSR2)** pour transmettre des messages, **bit par bit**, entre les processus.

Ce projet permet de comprendre :
- comment fonctionnent les signaux UNIX
- comment les processus communiquent
- comment manipuler les bits

---

## 📜 Objectif

Créer deux exécutables :
- `server` : attend des messages et les affiche.
- `client` : envoie une chaîne de caractères au serveur via son PID.

---

## ⚙️ Architecture du projet

```
Client                Serveur
  │                      │
  │  [ SIGUSR1 / 2 ]     │   ← chaque bit est un signal
  ├────────────────────> │
  │                      │
  │     [ACK Signal]     │   ← confirmation de réception
  ◄──────────────────────┤
```

- Le **client** convertit chaque caractère en binaire.
- Il envoie chaque bit en tant que signal (`SIGUSR1` pour 0, `SIGUSR2` pour 1).
- Le **serveur** les reconstruit en caractères.
- Lorsque le message est complet, il l'affiche à l'écran.

---

## 🔍 Fonctionnement

### 🧾 Côté serveur

- Affiche son PID au démarrage.
- Attend les signaux.
- Construit un caractère bit par bit.
- Affiche le message complet dès qu’il reçoit le caractère `\0`.

### 💬 Côté client

- Prend en argument le PID du serveur et le message.
- Envoie le message caractère par caractère, bit par bit.
- Attend un accusé de réception (`SIGUSR1`) avant d’envoyer le bit suivant.

---

## 🧱 Exemple

```bash
# Dans un terminal
$ ./server
Server PID : 12345

# Dans un autre terminal
$ ./client 12345 "Hello"
Hello
```

---

## 🛠️ Compilation

```bash
make        # Compile
make clean  # Supprime les fichiers objets
make fclean # Supprime tout (objets + binaires)
make re     # Recompile
```

---

## 🧪 Bonus

Le mode bonus ajoute :

✅ Une **confirmation** envoyée au client après chaque message  
✅ Le support **Unicode** (multi-octets)  
✅ Des protections supplémentaires

---

## 💡 Concepts appris

| Concept                     | Description |
|----------------------------|-------------|
| Signaux UNIX (`kill()`)    | Envoi d’un bit sous forme de signal |
| `sigaction`                | Réception d’un signal avec contexte |
| Manipulation de bits       | Envoi/lecture des `0` et `1` d’un caractère |
| PID                        | Identifiant de processus pour la communication |
| Communication asynchrone   | Pas de réseau, pas de socket, uniquement des signaux |
| Allocation dynamique       | Réception de messages de taille variable |
| Robustesse                 | Gestion des erreurs, clients multiples |
