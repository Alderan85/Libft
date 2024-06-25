/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgennai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:46:03 by rgennai           #+#    #+#             */
/*   Updated: 2024/01/19 14:46:06 by rgennai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmpsrc;
	unsigned char	*tmpdes;

	if (dst == NULL && src == NULL)
		return (dst);
	tmpsrc = (unsigned char *)src;
	tmpdes = (unsigned char *)dst;
	while (n > 0)
	{
		*(tmpdes++) = *(tmpsrc++);
		n--;
	}
	return (dst);
}
/*
int main()
{
	 char source[7] = "banana";
	 char dest[7] = "caccaca";
	 size_t len = 3;
	 
	 printf("%s",ft_memcpy(dest,source,len));
}
*/
