/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:18:15 by jlaine            #+#    #+#             */
/*   Updated: 2024/05/27 11:23:34 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	if (*s2 == '\0')
		return ((char *)s1);
	if (len == 0)
		return (NULL);
	i = 0;
	while (s1[i] && i < len)
	{
		j = 0;
		while (s2[j] && (i + j < len) && (s1[i + j] == s2[j]))
			j++;
		if (s2[j] == '\0')
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}
/*
int main() 
{
    const char *s1 = "Hello, this is a simple example.";
    const char *s2 = "simple";
    size_t len = 30;
    char *result = ft_strnstr(s1, s2, len);

    if (result != NULL) 
	{
        printf("Found '%s' in '%s' in first %zu chars.\n", s2, s1, len);
        printf("Substring starts at: %s\n", result);
    
    return 0;
	}
}
*/