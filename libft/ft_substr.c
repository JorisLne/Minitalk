/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 11:09:57 by jlaine            #+#    #+#             */
/*   Updated: 2024/05/27 11:43:09 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new;
	size_t			i;

	i = 0;
	if (start >= ft_strlen(s))
		len = 0;
	else if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	new = malloc(sizeof(char) * len + 1);
	if (new == NULL)
		return (NULL);
	while (i < len)
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
size_t	ft_strlen(const char *s);

int main() 
{
    char str[] = "Hello, World!";
    unsigned int start = 7;
    size_t len = 5;

    char *substr = ft_substr(str, start, len);
    if (substr != NULL) 
	{
		printf("Str : %s\n", str);
        printf("Substr : '%s'\n", substr);
        free(substr);
    } 
	else
        printf("Allocation mémoire échouée\n");

    return 0;
}
*/