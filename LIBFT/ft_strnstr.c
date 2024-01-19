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

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	blen;
	size_t	llen;
	size_t	pos;	

	pos = 0;
	blen = 0;
	llen = 0;
	if (little == NULL)
		return ((char *) big);
	while (big[blen] != little[llen] && big[len] != '\0')
	{
		blen++;
		pos++;
		while (little[llen] == big[blen] && blen +1 < len)
		{
			if (llen == '\0')
				return ((char *) big + pos);
			blen++;
			llen++;
		}
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
