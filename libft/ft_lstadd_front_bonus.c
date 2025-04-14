/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 09:39:34 by jlaine            #+#    #+#             */
/*   Updated: 2024/05/24 15:09:21 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
t_list	*ft_lstnew(void *content);

void ft_lstprint(t_list *lst)
{
    while (lst)
    {
        printf("%p -> ", lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

int main()
{
    t_list *list = NULL;

	printf("Liste avant ajouts : ");
    ft_lstprint(list);  //
    printf("\n");

    // Création de nouveaux éléments
    t_list *node1 = ft_lstnew((void *)1);
    t_list *node2 = ft_lstnew((void *)2);
    t_list *node3 = ft_lstnew((void *)3);

    // Ajout des éléments au début de la liste
    ft_lstadd_front(&list, node3); // Liste: 3 -> NULL
    ft_lstadd_front(&list, node2); // Liste: 2 -> 3 -> NULL
    ft_lstadd_front(&list, node1); // Liste: 1 -> 2 -> 3 -> NULL

    printf("Liste après ajouts : ");
    ft_lstprint(list);

    return 0;
}
*/