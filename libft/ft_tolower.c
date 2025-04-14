/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 09:46:06 by jlaine            #+#    #+#             */
/*   Updated: 2024/05/27 11:27:21 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
int main(void)
{
    char test_char1 = 'A';
    char test_char2 = 'Z';
    char test_char3 = 'a';
    char test_char4 = 'z';
    char test_char5 = '1';

    printf("%c -> %c\n", test_char1, ft_tolower(test_char1));
    printf("%c -> %c\n", test_char2, ft_tolower(test_char2));
    printf("%c -> %c\n", test_char3, ft_tolower(test_char3));
    printf("%c -> %c\n", test_char4, ft_tolower(test_char4));
    printf("%c -> %c\n", test_char5, ft_tolower(test_char5));

    return 0;
}
*/