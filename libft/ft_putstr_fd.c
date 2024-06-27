/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgennai <rgennai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:46:03 by rgennai           #+#    #+#             */
/*   Updated: 2024/06/27 11:43:21 by rgennai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *src, int fd)
{
	int	i;

	i = 0;
	if (!src || fd < 0)
		return ;
	while (src[i])
	{
		ft_putchar_fd(src[i], fd);
		i++;
	}
}
/*
int main(void)
{
	char str[7] = "Banana";
	int fd = 1;

	ft_putstr_fd(str, fd);
}
*/
