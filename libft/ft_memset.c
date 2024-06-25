/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgennai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:46:03 by rgennai           #+#    #+#             */
/*   Updated: 2024/01/19 14:46:06 by rgennai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp;

	tmp = (unsigned char *) b;
	while (len > 0)
	{
		*tmp++ = c;
		len--;
	}
	return (b);
}
/*
int main()
{
	 char source[7] = "banana";
	 int num = 97;
	 size_t len = 2;
	 
	 printf("%s",ft_memset(source,num,len));
}
*/
