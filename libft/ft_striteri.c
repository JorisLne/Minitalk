/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:20:21 by jlaine            #+#    #+#             */
/*   Updated: 2024/05/27 12:06:37 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
int	ft_toupper(int c);

void	up(unsigned int i, char *c)
{
	(void)i;
	*c = ft_toupper(*c);
}

int main()
{
	char str[] = "hello, world!";
	
	printf("Original string: %s\n", str);
	ft_striteri(str, up);
	printf("Modified string: %s\n", str);

	return 0;
}
*/