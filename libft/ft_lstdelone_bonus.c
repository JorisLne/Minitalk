/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 15:10:53 by jlaine            #+#    #+#             */
/*   Updated: 2024/05/24 15:57:28 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
/*
int main() {
    // Element
    t_list *node = malloc(sizeof(t_list));
    if (node == NULL) {
        printf("Erreur malloc.\n");
        return 1;
    }
    
    // Content
    int *data = malloc(sizeof(int));
    if (data == NULL) {
        printf("Erreur malloc.\n");
        free(node);
        return 1;
    }
    *data = 42;

    node->content = data;
    node->next = NULL;

    printf("Contenu avant suppression : %d\n", *(int *)node->content);
    ft_lstdelone(node, free);
    printf("Contenu après suppression : %d\n", *(int *)node->content);

    return 0;
}
*/