/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:26:40 by jlaine            #+#    #+#             */
/*   Updated: 2024/05/24 11:00:52 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
int main()
{
    // Création d'un contenu pour l'élément de la liste
    char *contenu = "Hello, World!";
    
    // Creation nouvel element
    t_list *element = ft_lstnew(contenu);

    // Vérification de la création de l'élément
    if (element == NULL)
    {
        printf("Allocation de mémoire échouée\n");
        return 1;
    }

    // Affichage du contenu de l'élément de la liste
    printf("Contenu de l'élément : %s\n", (char *)element->content);

    // Libération de la mémoire allouée
    free(element);

    return 0;
}
*/