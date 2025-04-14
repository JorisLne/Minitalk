/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:15:31 by jlaine            #+#    #+#             */
/*   Updated: 2024/05/27 10:27:20 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char) c;
		i++;
	}
	return (s);
}
/*
int main() 
{
    char buffer[10];

    // Fill buffer with 0xAA
    ft_memset(buffer, 0xAA, sizeof(buffer));

    // Print buffer's hexadecimal value
   for (size_t i = 0; i < sizeof(buffer); ++i) {
        printf("%02X ", (unsigned char)buffer[i]);
    }
    printf("\n");

    return 0;
}
*/