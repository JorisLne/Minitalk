/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:27:32 by jlaine            #+#    #+#             */
/*   Updated: 2024/05/27 11:16:42 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (size != 0)
	{
		while (src[i] && (i < size - 1))
		{
				dest[i] = src[i];
				i++;
		}
		dest[i] = '\0';
	}
	return (len);
}
/*
size_t	ft_strlen(const char *s);

int main() 
{
    char src[] = "Hello, World!";
    char dest[20];

    size_t len = ft_strlcpy(dest, src, sizeof(dest));
    printf("Src: %s\n", src);
    printf("Dest: %s\n", dest);
    printf("Src size: %zu\n", len);

    return 0;
}
*/