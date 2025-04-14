/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:51:44 by jlaine            #+#    #+#             */
/*   Updated: 2024/08/29 13:49:35 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

int		g_oldpid = 0;

char	*resize_buffer(char *str, size_t new_size, int pid)
{
	char	*new;

	new = ft_calloc(new_size, sizeof(char));
	if (!new)
	{
		kill(pid, SIGUSR2);
		free(str);
		exit(1);
	}
	if (str)
	{
		ft_strlcpy(new, str, ft_strlen(str) + 1);
		free(str);
		str = NULL;
	}
	return (new);
}

void	store_char(char c, int pid)
{
	static char		*str = NULL;
	static size_t	max_size = 50;

	if (!str || g_oldpid != pid)
	{
		g_oldpid = pid;
		max_size = 50;
		str = resize_buffer(NULL, max_size, pid);
	}
	if (c == '\0')
	{
		ft_printf("%s", str);
		max_size = 50;
		free(str);
		str = NULL;
	}
	else
	{
		if (ft_strlen(str) + 1 == max_size)
		{
			max_size *= 2;
			str = resize_buffer(str, max_size, pid);
		}
		str[ft_strlen(str)] = c;
	}
}

void	handle_new_pid(int *i, unsigned char *c, int pid)
{
	if (pid != g_oldpid)
	{
		*i = 0;
		*c = 0;
		store_char('\0', pid);
	}
}

void	sig_received_handler(int sig, siginfo_t *info, void *context)
{
	static int				bit_count = 0;
	static unsigned char	current_byte = 0;

	(void)context;
	handle_new_pid(&bit_count, &current_byte, info->si_pid);
	if (sig == SIGUSR2)
	{
		current_byte <<= 1;
		current_byte |= 1;
	}
	else if (sig == SIGUSR1)
		current_byte <<= 1;
	bit_count++;
	if (bit_count == 8)
	{
		store_char(current_byte, info->si_pid);
		bit_count = 0;
		current_byte = 0;
	}
	g_oldpid = info->si_pid;
	kill(info->si_pid, SIGUSR1);
}

int	main(void)
{
	struct sigaction	action;

	ft_printf("Server PID : %d\n", getpid());
	action.sa_sigaction = sig_received_handler;
	sigemptyset(&action.sa_mask);
	action.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &action, NULL);
	sigaction(SIGUSR2, &action, NULL);
	while (1)
		sleep(1);
	return (0);
}
/*
struct sigaction
{
	void 		(*sa_handler)(int);
	void 		(*sa_sigaction)(int, siginfo_t *, void *);
	sigset_t	sa_mask;
	int			sa_flags;
	void		(*sa_restorer)(void);
}

typedef struct 
{
	int      si_signo;  ***Signal number***
	int      si_code;   ***Signal code***
	pid_t    si_pid;    ***Sending process ID***
	uid_t    si_uid;    ***Real user ID of sending process***
	void    *si_addr;   ***Address of faulting instruction***
	int      si_status; ***Exit value or signal***
	union sigval si_value;  ***Signal value***
} siginfo_t;
*/