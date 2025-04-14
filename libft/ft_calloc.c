/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:36:52 by jlaine            #+#    #+#             */
/*   Updated: 2024/05/27 09:48:37 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*tab;

	if (nmemb && size && nmemb > UINT_MAX / size)
		return (NULL);
	tab = malloc(nmemb * size);
	if (tab == NULL)
		return (NULL);
	ft_bzero(tab, nmemb * size);
	return (tab);
}
/*
void	ft_bzero(void *s, size_t n);

int	main(void)
{
	int* array;
    int i;

    // Calloc 10 ints
    array = (int *)calloc(10, sizeof(int));

	// Check
    if (array == NULL) {
        printf("Échec de l'allocation de mémoire\n");
        return 1;
    }

    // Print values at 0
    for (i = 0; i < 10; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    free(array);

    return 0;
}
*/