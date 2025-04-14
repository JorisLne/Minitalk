/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:24:56 by jlaine            #+#    #+#             */
/*   Updated: 2024/05/27 10:03:45 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_isprint('B'));
	printf("%d\n", ft_isprint(103));
	printf("%d\n", ft_isprint(' '));
	printf("%d\n", ft_isprint('*'));
	printf("%d\n", ft_isprint('4'));
	printf("%d\n", ft_isprint(128));
	printf("%d\n", ft_isprint(25));
}
*/