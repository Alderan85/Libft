/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgennai <rgennai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:46:03 by rgennai           #+#    #+#             */
/*   Updated: 2024/06/27 11:38:01 by rgennai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*tmpsrc;
	unsigned char	*tmpdst;
	size_t			i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	tmpsrc = (unsigned char *)src;
	tmpdst = (unsigned char *)dst;
	if (tmpsrc < tmpdst)
		while (n--)
			tmpdst[n] = tmpsrc[n];
	else
	{
		while (i < n)
		{
			tmpdst[i] = tmpsrc[i];
			i++;
		}
	}
	return (dst);
}
/*
int main()
{
	 char source[7] = "banana";
	 char dest[7] = "joejoe";
	 size_t len = 3;
	 
	 printf("%s",ft_memmove(dest,source,len));
}
*/
