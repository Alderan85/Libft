/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:15:52 by fabnenci          #+#    #+#             */
/*   Updated: 2023/12/28 12:15:55 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char *tmpsrc;
	unsigned char *tmpdes;
		int i;
		i = 0;
	if(dst == (void*)0 && src == (void*)0)
		return (dst);
	tmpsrc = (char *)src;
	tmpdes = (char *)dst;
	
	if(src > dst)
	{
		while (n > 0)
		{
			tmpdes[i] = tmpsrc[i];
			i++;
			n--;
		}
	}
	else
	{
		while (n-- > 0)
		{
			tmpdes[n] = tmpsrc[n];
			n--;
		}
	}
	return(dst);
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
