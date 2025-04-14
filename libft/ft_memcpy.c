/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:24:19 by jlaine            #+#    #+#             */
/*   Updated: 2024/05/27 10:14:21 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == NULL && src == NULL && n > 0)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char src[] = "Salut gros BG";
    char *dest = (char *)malloc(sizeof(src)); // Malloc dest

    // Test memcpy (copy src into dest)
    ft_memcpy(dest, src, sizeof(src));

    // Print dest content to check
    printf("Contenu de dest après memcpy: %s\n", dest);

    // Free dest
    free(dest);

    return 0;
}
*/