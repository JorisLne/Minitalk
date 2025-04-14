/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 09:43:03 by jlaine            #+#    #+#             */
/*   Updated: 2024/05/27 11:27:58 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
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

    printf("%c -> %c\n", test_char1, ft_toupper(test_char1));
    printf("%c -> %c\n", test_char2, ft_toupper(test_char2));
    printf("%c -> %c\n", test_char3, ft_toupper(test_char3));
    printf("%c -> %c\n", test_char4, ft_toupper(test_char4));
    printf("%c -> %c\n", test_char5, ft_toupper(test_char5));

    return 0;
}
*/