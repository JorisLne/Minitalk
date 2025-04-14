/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 13:46:51 by jlaine            #+#    #+#             */
/*   Updated: 2024/07/08 14:41:24 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = 0;
	new = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new)
		return (NULL);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new[i + j] = s2[j];
		j++;
	}
	new[i + j] = '\0';
	return (new);
}
/*
int main() 
{
    char *s1 = "Hello, ";
    char *s2 = "World!";
    char *result;

	printf("s1 : %s\n", s1);
	printf("s2 : %s\n", s2);

    result = ft_strjoin(s1, s2);
    if (result != NULL) 
	{
        printf("Result: %s\n", result);
        free(result);
    } 
	else
        printf("Malloc failed\n");

    return 0;
}
*/