/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 16:11:37 by jlaine            #+#    #+#             */
/*   Updated: 2024/08/19 16:04:46 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_which_arg(char c, va_list ap, int *n)
{
	char	*str;

	if (c == 'c')
		return (ft_putchar_printf(va_arg(ap, int), n));
	if (c == 's')
	{
		str = va_arg(ap, char *);
		if (!str)
			return (ft_putstr_printf("(null)", n));
		else
			return (ft_putstr_printf(str, n));
	}
	if (c == 'p')
		return (ft_ptr_printf(va_arg(ap, unsigned long int), n));
	if (c == 'd' || c == 'i')
		return (ft_putnbr_printf(va_arg(ap, int), n, 0));
	if (c == 'u')
		return (ft_putnbr_printf(va_arg(ap, unsigned int), n, 1));
	if (c == 'x')
		return (ft_hexa_printf(va_arg(ap, unsigned int), n, 0));
	if (c == 'X')
		return (ft_hexa_printf(va_arg(ap, unsigned int), n, 1));
	return ;
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		n;

	if (!str)
		return (-1);
	i = 0;
	n = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] != '%')
			ft_putchar_printf(str[i++], &n);
		else
		{
			if (str[i] == '%' && str[i + 1] == '%')
				ft_putchar_printf(str[i], &n);
			else
				ft_which_arg(str[i + 1], ap, &n);
			i = i + 2;
		}
	}
	va_end(ap);
	return (n);
}
