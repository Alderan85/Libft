/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgennai <rgennai@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:46:03 by rgennai           #+#    #+#             */
/*   Updated: 2024/01/19 14:46:06 by rgennai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	unsigned char	*tmp;

	tmp = (unsigned char *) b;
	while (len > 0)
	{
		*tmp++ = 0;
		len--;
	}
}
/*
int main()
{
	 char source[7] = "banana";
	 size_t len = 2;
	 ft_bzero(source,len);
	 printf("%s",source[2]);
}
*/
