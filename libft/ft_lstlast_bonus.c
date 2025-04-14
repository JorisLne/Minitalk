/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 12:29:10 by jlaine            #+#    #+#             */
/*   Updated: 2024/07/08 13:20:32 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int main(void)
{
    t_list *first = malloc(sizeof(t_list));
    t_list *second = malloc(sizeof(t_list));
    t_list *third = malloc(sizeof(t_list));

    first->content = "Premier";
    first->next = second;
    second->content = "Deuxième";
    second->next = third;
    third->content = "Troisième";
    third->next = NULL; // Dernier elem : next = NULL

    t_list *last_element = ft_lstlast(first);

    printf("Le dernier élément est : %p\n", (void *)last_element);
    printf("Le dernier élément contient : %s\n", (char *)last_element->content);

    free(first);
    free(second);
    free(third);

    return (0);
}
*/