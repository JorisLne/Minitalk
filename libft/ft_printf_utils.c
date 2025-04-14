/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 16:07:56 by jlaine            #+#    #+#             */
/*   Updated: 2024/08/01 16:17:46 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_printf(char c, int *len)
{
	write(1, &c, 1);
	*len = *len + 1;
}

void	ft_putstr_printf(char *str, int *len)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		*len += 6;
		return ;
	}
	while (str[i])
		write(1, &str[i++], 1);
	*len += i;
}

void	ft_putnbr_printf(long long int n, int *len, int unsign)
{
	if (n < 0 && !unsign)
	{
		ft_putchar_printf('-', len);
		n = -n;
	}
	if (n <= 9)
		ft_putchar_printf(n + '0', len);
	if (n >= 10)
	{
		ft_putnbr_printf(n / 10, len, unsign);
		ft_putchar_printf(n % 10 + '0', len);
	}
}

void	ft_hexa_printf(unsigned long long int n, int *len, int upper_lower)
{
	char	*base;

	if (upper_lower == 0)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n == 0)
	{
		ft_putchar_printf('0', len);
		return ;
	}
	if (n <= 15)
		ft_putchar_printf(base[n], len);
	if (n > 15)
	{
		ft_hexa_printf(n / 16, len, upper_lower);
		ft_putchar_printf(base[n % 16], len);
	}
}

void	ft_ptr_printf(unsigned long int ptr, int *len)
{
	if (ptr == 0)
		return (ft_putstr_printf("(nil)", len));
	ft_putstr_printf("0x", len);
	ft_hexa_printf(ptr, len, 0);
}
