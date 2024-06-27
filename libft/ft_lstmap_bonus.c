/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgennai <rgennai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:47:55 by rgennai           #+#    #+#             */
/*   Updated: 2024/06/27 13:54:21 by rgennai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*data;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		data = f(lst->content);
		new_node = ft_lstnew(data);
		if (new_node == NULL)
		{
			ft_lstclear(&new_list, del);
			del(data);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst -> next;
	}
	return (new_list);
}
/*
int main()
{
    t_list *node1 = ft_lstnew("ONE");
    t_list *node2 = ft_lstnew("TWO");
    t_list *node3 = ft_lstnew("BANANA");
    
    node1->next = node2;
    node2->next = node3;
    
    t_list *new_list = ft_lstmap(node1, ft_strdup, free);

    printf("Nuova lista:\n");
    t_list *current = new_list;
    while (current)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }    
}*/
