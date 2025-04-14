/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:10:57 by jlaine            #+#    #+#             */
/*   Updated: 2024/05/27 10:09:39 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
    char str[] = "Hello, world!";
    char *result;

    // Recherche du caractère 'e' dans la chaîne str
    result = (char *)memchr(str, 'e', strlen(str));

    if (result != NULL)
    {
		printf("memchr est : %s\n", result);
        printf("Char 'e' trouvé à la position : %ld\n", result - str);
    }
    else
    {
        printf("Le caractère 'e' n'a pas été trouvé dans la chaîne.\n");
    }

    return 0;
}
*/