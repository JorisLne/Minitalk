/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:52:59 by jlaine            #+#    #+#             */
/*   Updated: 2024/08/29 12:54:30 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

typedef struct s_client
{
	int		pid;
	int		bit;
	size_t	i;
	size_t	bits_received;
	char	*str;
}	t_client;

// server
void	store_char(char c, int pid);
char	*resize_buffer(char *str, size_t new_size, int pid);
void	handle_new_pid(int *i, unsigned char *c, int pid);
void	sig_received_handler(int sig, siginfo_t *info, void *context);

// client
void	confirm_end(void);
void	send_bit(unsigned char c);
void	sig_sent_handler(int sig);
void	send_sig(int pid, int sig);

#endif
