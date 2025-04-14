/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:21:34 by jlaine            #+#    #+#             */
/*   Updated: 2024/07/08 14:37:12 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char sep)
{
	int	counter;
	int	in_word;
	int	i;

	i = 0;
	counter = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != sep && in_word == 0)
		{
			in_word = 1;
			counter++;
		}
		else if (s[i] == sep)
			in_word = 0;
		i++;
	}
	return (counter);
}

static char	*word_cpy(char const *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *str, char sep)
{
	char	**sub_str;
	int		i;
	int		j;
	int		start;

	if (!str)
		return (NULL);
	sub_str = malloc(sizeof(char *) * (count_words(str, sep) + 1));
	if (!sub_str)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == sep)
			i++;
		start = i;
		while (str[i] && str[i] != sep)
			i++;
		if (i > start)
			sub_str[j++] = word_cpy(str, start, i);
	}
	sub_str[j] = NULL;
	return (sub_str);
}
/*
int main()
{
    char **sub_str;
    int i;

    // Appel ft_split
    sub_str = ft_split("Hello world this is a test", ' ');

    if (sub_str == NULL)
    {
        printf("Erreur d'allocation de mémoire\n");
        return 1;
    }

    i = 0;
    while (sub_str[i] != NULL)
    {
        printf("sub_str[%d] = %s\n", i, sub_str[i]);
        free(sub_str[i]);
        i++;
    }

    // Libération du tableau de pointeurs
    free(sub_str);

    return 0;
}
*/