/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:19:08 by jlaine            #+#    #+#             */
/*   Updated: 2024/05/27 11:26:41 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == 0)
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
/*
size_t	ft_strlen(const char *s);

int main() 
{
    const char *s = "Bonjour, monde!";
    char c = 'm';

	printf("String is %s\n", s);

    char *result = ft_strrchr(s, c);

    if (result != NULL) {
        printf("Char '%c' found at position : %ld\n", c, result - s);
    } else {
        printf("Char '%c' not found.\n", c);
    }

    return 0;
}
*/