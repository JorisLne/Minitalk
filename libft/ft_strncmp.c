/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:55:09 by jlaine            #+#    #+#             */
/*   Updated: 2024/05/27 11:19:59 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int main() {
    char str1[] = "Hello";
    char str2[] = "Hellp";
    int result = strncmp(str1, str2, 5);

	printf("Difference s1 - s2 = %d\n", result);
    if(result == 0)
        printf("Chaines egales jusqu'au quatrième caractère.\n");
    else if(result < 0)
        printf("s1 < s2\n");
    else
        printf("s1 > s2\n");
    return 0;
}
*/