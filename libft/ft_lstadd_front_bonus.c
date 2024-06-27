/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgennai <rgennai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:12:39 by rgennai           #+#    #+#             */
/*   Updated: 2024/06/27 13:54:42 by rgennai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}
/*
int main() 
{
    t_list *list = NULL;
    t_list *node1 = ft_lstnew("ONE");
    t_list *node2 = ft_lstnew("TWO");
    t_list *node3 = ft_lstnew("BANANAAAAAAAS");

    ft_lstadd_front(&list, node3);
    ft_lstadd_front(&list, node2);
    ft_lstadd_front(&list, node1);

    printf("%s\n", (char *)list->content);   
    printf("%s\n", (char *)list->next->content);  
    printf("%s\n", (char *)list->next->next->content);
}
*/
