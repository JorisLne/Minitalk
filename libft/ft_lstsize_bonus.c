/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 12:02:30 by jlaine            #+#    #+#             */
/*   Updated: 2024/05/24 12:26:27 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	if (lst == NULL)
		return (0);
	return (ft_lstsize(lst->next) + 1);
}
/*
int main()
{
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));

    node1->content = "first";
    node1->next = node2;

    node2->content = "second";
    node2->next = node3;

    node3->content = "third";
    node3->next = NULL;

    printf("Taille de la liste : %d\n", ft_lstsize(node1));

    free(node1);
    free(node2);
    free(node3);

    return 0;
}
*/