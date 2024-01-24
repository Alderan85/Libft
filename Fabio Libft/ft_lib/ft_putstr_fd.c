/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:03:56 by fabnenci          #+#    #+#             */
/*   Updated: 2024/01/22 18:04:01 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *src, int fd)
{
	int	i;

	i = 0;
	if (!src)
		return (NULL);
	while (src[i])
	{
		ft_putchar_fd(src[i], fd);
		i++;
	}
}
