/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgennai <rgennai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:37:46 by rgennai           #+#    #+#             */
/*   Updated: 2024/06/27 13:54:46 by rgennai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL || new == NULL)
	{
		return ;
	}
	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
/*
int main(void)
{
    t_list *list = NULL;
    t_list *node1 = ft_lstnew("ONE");
    t_list *node2 = ft_lstnew("TWO");
    t_list *node3 = ft_lstnew("BANANAAAAAAAS");

    ft_lstadd_back(&list, node3);
    ft_lstadd_back(&list, node2);
    ft_lstadd_back(&list, node1);

    printf("%s\n", (char *)list->content);   
    printf("%s\n", (char *)list->next->content);  
    printf("%s\n", (char *)list->next->next->content);
}
*/
