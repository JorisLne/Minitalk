/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:38:16 by jlaine            #+#    #+#             */
/*   Updated: 2024/05/27 09:44:20 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(s + i) = 0;
		i++;
	}
}
/*
int main() 
{
    char buffer[10]; 

    printf("Contenu initial du buffer :\n");
    for (size_t i = 0; i < sizeof(buffer); ++i) {
        printf("%d ", buffer[i]);
    }
    printf("\n");

    ft_bzero(buffer, sizeof(buffer));

    printf("Contenu du buffer après ft_bzero :\n");
    for (size_t i = 0; i < sizeof(buffer); ++i) {
        printf("%d ", buffer[i]);
    }
    printf("\n");

    return 0;
}
*/