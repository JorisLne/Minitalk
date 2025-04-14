/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 18:49:13 by jlaine            #+#    #+#             */
/*   Updated: 2024/05/27 10:35:24 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] && i < size)
		i++;
	while ((src[j]) && ((i + j + 1) < size))
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i != size)
		dest[i + j] = '\0';
	return (i + ft_strlen(src));
}
/*
size_t	ft_strlen(const char *s);

int main() 
{
    char dest1[10] = "Hello";
    char src1[] = " World";
    ft_strlcat(dest1, src1, sizeof(dest1));
    printf("Result 1: %s\n", dest1);

    char dest2[5] = "Test";
    char src2[] = "12345";
    ft_strlcat(dest2, src2, sizeof(dest2));
    printf("Result 2: %s\n", dest2);

    return 0;
}
*/