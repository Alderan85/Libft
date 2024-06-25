/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgennai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:09:56 by rgennai           #+#    #+#             */
/*   Updated: 2024/01/03 16:10:03 by rgennai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	blen;
	size_t	llen;
	size_t	pos;

	pos = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[pos] != '\0' && pos < len)
	{
		blen = pos;
		llen = 0;
		while (big[blen] == little[llen] && blen < len)
		{
			if (little[llen + 1] == '\0')
				return ((char *)(big + pos));
			blen++;
			llen++;
		}
		pos++;
	}
	return (NULL);
}
/*
int main()
{
	char s1[8] = "Bantera";
	char s2[3] = "te";
	size_t len = 16;
		
	printf("%s", strnstr(s1,s2,len));
}
*/
