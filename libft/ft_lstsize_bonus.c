/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgennai <rgennai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:12:13 by rgennai           #+#    #+#             */
/*   Updated: 2024/06/27 13:54:12 by rgennai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmpnode;
	int		i;

	tmpnode = lst;
	i = 0;
	while (tmpnode)
	{
		tmpnode = tmpnode->next;
		i++;
	}
	return (i);
}
/*
int main() 
{
    t_list *list = NULL;
    t_list *node1 = ft_lstnew("ONE");
    t_list *node2 = ft_lstnew("TWO");
    t_list *node3 = ft_lstnew("BANANAAAAAS");

    ft_lstadd_front(&list, node3);
    ft_lstadd_front(&list, node2);
    ft_lstadd_front(&list, node1);

    int size = ft_lstsize(list);
    printf("Nodi : %d\n", size);

    return 0;
}
*/
