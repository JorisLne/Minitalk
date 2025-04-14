/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 14:08:52 by jlaine            #+#    #+#             */
/*   Updated: 2024/05/24 15:05:56 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
/*
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);

int	main(void)
{
	t_list	*begin = NULL;
	t_list	*elem1 = ft_lstnew("lorem");
	t_list	*elem2 = ft_lstnew("ipsum");
	t_list	*elem3 = ft_lstnew("dolor");
	t_list	*elem4 = ft_lstnew("sit");
	t_list	*temp;

	ft_lstadd_back(&begin, elem1);
	ft_lstadd_back(&begin, elem2);
	ft_lstadd_back(&begin, elem3);
	ft_lstadd_back(&begin, elem4);

	temp = begin;
	while (temp != NULL)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	
	return (0);
}
*/