/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 14:13:57 by jlaine            #+#    #+#             */
/*   Updated: 2024/05/27 11:52:52 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	new = malloc(sizeof(char) * (end - start + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (i < end - start)
	{
		new[i] = s1[start + i];
		i++;
	}
	new[end - start] = '\0';
	return (new);
}
/*
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);

int main(void)
{
    char *s1 = "   Hello, World!   ";
    char *set = " ";
    char *result;

    result = ft_strtrim(s1, set);
    printf("Original string: '%s'\n", s1);
    printf("Trimmed string: '%s'\n", result);
    free(result);

    s1 = "***Hello, World!***";
    set = "*";
    result = ft_strtrim(s1, set);
    printf("Original string: '%s'\n", s1);
    printf("Trimmed string: '%s'\n", result);
    free(result);

    s1 = "---Hello, World!---";
    set = "-";
    result = ft_strtrim(s1, set);
    printf("Original string: '%s'\n", s1);
    printf("Trimmed string: '%s'\n", result);
    free(result);

    return 0;
}
*/