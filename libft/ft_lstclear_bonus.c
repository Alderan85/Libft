/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgennai <rgennai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:47:24 by rgennai           #+#    #+#             */
/*   Updated: 2024/06/27 13:54:38 by rgennai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst)
	{
		tmp = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}
/*
int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = ft_lstnew("ONE");
	node2 = ft_lstnew("TWO");
	node3 = ft_lstnew("BANANA");

	node1->next = node2;
	node2->next = node3;

	ft_lstclear(&node1, free);

	if (node1 == NULL)
		printf("YEAH\n");
	else
		printf("WTF?!?\n");

	return (0);
}
*/