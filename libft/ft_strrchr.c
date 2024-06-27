/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgennai <rgennai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:56:39 by rgennai           #+#    #+#             */
/*   Updated: 2024/06/27 11:31:29 by rgennai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c > 127)
		c = c % 128;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
/*
int main()
{
	char test[7] = "Banono";
	char c = 'a';
	printf ("%s", ft_strrchr(test, c));
}
*/
