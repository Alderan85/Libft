/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgennai <rgennai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:47:41 by rgennai           #+#    #+#             */
/*   Updated: 2024/06/27 13:54:30 by rgennai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmpnode;

	tmpnode = lst;
	while (tmpnode)
	{
		f(tmpnode->content);
		tmpnode = tmpnode -> next;
	}
}
/*
void bananamagic(void *content)
{
    if (content == "BANANA")
            printf("%s", "JOE\n");
}    

int main(void)
{
    t_list *list = NULL;
    t_list *new_elem1 = ft_lstnew("ONE");
    t_list *new_elem2 = ft_lstnew("TWO");
    t_list *new_elem3 = ft_lstnew("BANANA");

    ft_lstadd_back(&list, new_elem1);
    ft_lstadd_back(&list, new_elem2);
    ft_lstadd_back(&list, new_elem3);

    t_list *tmp = list;
    while (tmp != NULL)
    {
        printf("%s -> ", (char *)tmp->content);
        tmp = tmp->next;
    }
    printf("\n");

    ft_lstiter(list, bananamagic);

    tmp = list;
    while (tmp != NULL)
    {
        printf("%s -> ", (char *)tmp->content);
        tmp = tmp->next;
    }
    printf("\n");
    return;
}
*/
