/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:14:54 by jlaine            #+#    #+#             */
/*   Updated: 2024/05/27 12:10:20 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dup;

	i = 0;
	dup = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (dup == NULL)
		return (NULL);
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
size_t	ft_strlen(const char *s);

int main() 
{
    const char *original = "Bonjour le monde !";
    char *duplicate = ft_strdup(original);

    if (duplicate == NULL) 
	{
        printf("Malloc failed.\n");
        return 1;
    }

    printf("Original string : %s\n", original);
    printf("Duplicate string : %s\n", duplicate);

    free(duplicate);

    return 0;
}
*/