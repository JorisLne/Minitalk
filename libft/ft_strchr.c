/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 09:53:58 by jlaine            #+#    #+#             */
/*   Updated: 2024/05/27 10:32:59 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s + i);
	return (NULL);
}
/*
int main() 
{
    const char *s = "Bonjour, monde!";
    char c = 'm';

    char *result = ft_strchr(s, c);

    if (result != NULL)
        printf("Char '%c' found at position : %ld\n", c, result - s);
    else 
        printf("Char '%c' not found.\n", c);
    return 0;
}
*/