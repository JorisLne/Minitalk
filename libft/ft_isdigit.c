/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 10:41:13 by jlaine            #+#    #+#             */
/*   Updated: 2024/05/27 10:02:14 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_isdigit('B'));
	printf("%d\n", ft_isdigit('k'));
	printf("%d\n", ft_isdigit(' '));
	printf("%d\n", ft_isdigit('*'));
	printf("%d\n", ft_isdigit('4'));
	printf("%d\n", ft_isdigit('0'));
}
*/