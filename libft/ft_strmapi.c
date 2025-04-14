/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:47:18 by jlaine            #+#    #+#             */
/*   Updated: 2024/05/27 11:59:09 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	i = 0;
	new = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (new == NULL)
		return (NULL);
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
size_t	ft_strlen(const char *s);
int	ft_toupper(int c);

char	transform(unsigned int i, char c)
{
	(void)i;
	return ft_toupper(c);
}

int	main(void)
{
	char *original = "hello, world!";
	char *modified;

	modified = ft_strmapi(original, transform);

	printf("Original: %s\n", original);
	printf("Modifié : %s\n", modified);

	free(modified);
	return 0;
}
*/