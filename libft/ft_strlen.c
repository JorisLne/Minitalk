/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:54:40 by jlaine            #+#    #+#             */
/*   Updated: 2024/05/27 11:17:29 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
int main(void)
{
	printf("%zu\n", ft_strlen(""));
	printf("%zu\n", ft_strlen("Joris"));
	printf("%zu\n", ft_strlen("Bonjour42"));
	printf("%zu\n", ft_strlen("Bonjour42***"));
}
*/