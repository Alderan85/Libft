/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgennai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:46:03 by rgennai           #+#    #+#             */
/*   Updated: 2024/01/19 14:46:06 by rgennai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*tmpsrc;
	unsigned char	*tmpdes;
	size_t			i;

	i = 0;
	tmpsrc = (unsigned char *)src;
	tmpdes = (unsigned char *)dst;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (tmpsrc > tmpdes)
	{
		while (i < n)
		{
			tmpdes[i] = tmpsrc[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			n--;
			tmpdes[n] = tmpsrc[n];
		}
	}
	return (dst);
}
/*
int main()
{
	 char source[7] = "banana";
	 char dest[7] = "caccaca";
	 size_t len = 3;
	 
	 printf("%s",ft_memmove(dest,source,len));
}
*/
