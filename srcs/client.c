/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:51:46 by jlaine            #+#    #+#             */
/*   Updated: 2024/08/29 11:34:28 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

t_client	g_client;

void	send_sig(int pid, int sig)
{
	if (kill(pid, sig) == -1)
	{
		ft_printf("Error : kill() failed\n");
		exit(1);
	}
}

void	send_bit(unsigned char c)
{
	if (c & g_client.bit)
		send_sig(g_client.pid, SIGUSR2);
	else
		send_sig(g_client.pid, SIGUSR1);
	g_client.bit >>= 1;
}

void	confirm_end(void)
{
	if (g_client.bits_received == (ft_strlen(g_client.str) + 1) * 8)
		exit(0);
	else
		ft_printf("Message failed to be send\n");
	exit(0);
}

void	sig_sent_handler(int sig)
{
	if (sig == SIGUSR1)
	{
		g_client.bits_received++;
		if (g_client.bit == 0)
		{
			if (g_client.str[g_client.i] == '\0')
				confirm_end();
			else
				g_client.i++;
			g_client.bit = 128;
			send_bit(g_client.str[g_client.i]);
		}
		else
			send_bit(g_client.str[g_client.i]);
	}
	else if (sig == SIGUSR2)
	{
		ft_printf("An error as occurred\n");
		exit(1);
	}
}

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		ft_printf("Retry with : ./client [pid] [message]\n");
		return (1);
	}
	signal(SIGUSR1, sig_sent_handler);
	signal(SIGUSR2, sig_sent_handler);
	g_client.pid = ft_atoi(av[1]);
	g_client.str = av[2];
	g_client.bits_received = 0;
	g_client.i = 0;
	g_client.bit = 128;
	send_bit(g_client.str[g_client.i]);
	while (1)
		sleep(1);
	return (0);
}
