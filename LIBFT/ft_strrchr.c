/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgennai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:56:39 by rgennai           #+#    #+#             */
/*   Updated: 2024/01/19 15:56:42 by rgennai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*occ;
	char	ch;
	size_t	i;

	i = 0;
	ch = (char) c;
	occ = NULL;
	while (s[i])
	{
		if (s[i] == ch)
			occ = (char *) &s[i];
		i++;
	}
	if (ch == '\0')
	{
		i++;
		if (s[i] == ch)
			occ = (char *) &s[i];
	}
	return (occ);
}
/*
int main()
{
	char test[7] = "Banono";
	char c = 'a';
	printf ("%s", ft_strrchr(test, c));
}
*/