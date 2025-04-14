/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 10:13:45 by jlaine            #+#    #+#             */
/*   Updated: 2024/05/27 09:59:07 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_isalpha('B'));
	printf("%d\n", ft_isalpha('k'));
	printf("%d\n", ft_isalpha(' '));
	printf("%d\n", ft_isalpha('*'));
	printf("%d\n", ft_isalpha('4'));
}
*/