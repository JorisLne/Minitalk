/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 10:02:17 by jlaine            #+#    #+#             */
/*   Updated: 2024/05/27 12:16:51 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
/*
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);

int main() 
{
    ft_putnbr_fd(12345, STDOUT_FILENO);
    write(STDOUT_FILENO, "\n", 1);

    ft_putnbr_fd(-9876, STDOUT_FILENO);
    write(STDOUT_FILENO, "\n", 1);

    return 0;
}
*/