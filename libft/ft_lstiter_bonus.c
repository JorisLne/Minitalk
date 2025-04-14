/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:46:26 by jlaine            #+#    #+#             */
/*   Updated: 2024/05/24 17:07:53 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int main(void)
{
	t_list *lst = malloc(sizeof(t_list));
	t_list *temp; // conserve une reference debut de liste

	temp = lst;
	lst->content = "Premier";
	lst->next = malloc(sizeof(t_list));
	lst = lst->next;
	lst->content = "Deuxième";
	lst->next = NULL;

	ft_lstiter(temp, &print_content);

	free(temp->next); // libere memoire depuis debut liste (ref)
	free(temp);

	return (0);
}
*/