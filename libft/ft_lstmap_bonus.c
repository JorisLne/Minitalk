/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:09:31 by jlaine            #+#    #+#             */
/*   Updated: 2024/05/24 18:16:19 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_obj;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_obj = ft_lstnew(f(lst->content));
		if (!new_obj)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_obj);
		lst = lst->next;
	}
	return (new_list);
}
/*
t_list	*ft_lstnew(void *content);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
t_list	*ft_lstlast(t_list *lst);
void	ft_lstdelone(t_list *lst, void (*del)(void *));

void *double_value(void *content)
{
    int *value = (int *)content;
    int *result = malloc(sizeof(int));
    if (result)
        *result = (*value) * 2;
    return result;
}

void del_int(void *content)
{
    free(content);
}

int main()
{
    t_list *lst = NULL;
    
    // Initial list (int from 1 to 5)
    int i = 1;
    while (i <= 5)
    {
        ft_lstadd_back(&lst, ft_lstnew(&i));
        i++;
    }

    // Print list before lstmap
    printf("Liste avant application de ft_lstmap :\n");
    t_list *tmp = lst;
    while (tmp)
    {
        printf("%d \n", *(int *)(tmp->content));
        tmp = tmp->next;
    }

    t_list *new_lst = ft_lstmap(lst, double_value, del_int);

    // New list after lstmap
    printf("Nouvelle liste après application de ft_lstmap :\n");
    tmp = new_lst;
    while (tmp)
    {
        printf("%d \n", *(int *)(tmp->content));
        tmp = tmp->next;
    }

    return 0;
}
*/