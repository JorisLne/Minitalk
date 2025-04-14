/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:10:29 by jlaine            #+#    #+#             */
/*   Updated: 2024/05/24 18:25:14 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	return (result * sign);
}
/*
int main(void) 
{
    const char *str1 = "123";
    const char *str2 = "   -456";
    const char *str3 = "+789";
    const char *str4 = "42 is the answer";
    const char *str5 = "   2147483647";
    const char *str6 = "   -2147483648";
    const char *str7 = "    0";
    const char *str8 = "  +000123";
    
    printf("String: '%s' -> Integer: %d\n", str1, ft_atoi(str1));
    printf("String: '%s' -> Integer: %d\n", str2, ft_atoi(str2));
    printf("String: '%s' -> Integer: %d\n", str3, ft_atoi(str3));
    printf("String: '%s' -> Integer: %d\n", str4, ft_atoi(str4));
    printf("String: '%s' -> Integer: %d\n", str5, ft_atoi(str5));
    printf("String: '%s' -> Integer: %d\n", str6, ft_atoi(str6));
    printf("String: '%s' -> Integer: %d\n", str7, ft_atoi(str7));
    printf("String: '%s' -> Integer: %d\n", str8, ft_atoi(str8));
    
    return 0;
}
*/
