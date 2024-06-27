/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgennai <rgennai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:47:04 by rgennai           #+#    #+#             */
/*   Updated: 2024/06/27 13:54:35 by rgennai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}
/*
int main()
{
    t_list	*node1;

	node1 = ft_lstnew("ONE");

    ft_lstdelone(node1, free);

	if (node1 != NULL)
		{
			printf("Cancellato\n");
		}
}
*/
