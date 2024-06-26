/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgennai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 12:26:54 by rgennai           #+#    #+#             */
/*   Updated: 2024/06/26 12:27:09 by rgennai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmpnode;

	tmpnode = lst;
	if (!lst)
		return (NULL);
	while (tmpnode->next)
	{
		tmpnode = tmpnode->next;
	}
	return (tmpnode);
}
/*
int main(void)
{
    t_list *node1 = ft_lstnew("ONE");
    t_list *node2 = ft_lstnew("TWO);
    t_list *node3 = ft_lstnew("BANANA FINALEEEE");

    node1->next = node2;
    node2->next = node3;

    t_list *last_node = ft_lstlast(node1);
    printf("%s", (char *)last_node->content);
}
*/
