/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:15:56 by fabnenci          #+#    #+#             */
/*   Updated: 2024/01/22 18:04:16 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
		{
			return ((char *)c);
			s++;
		}
	}
	if (c == '\0')
		return ((char *)c);
	return (0);
}
/*
int	main()
{
	char	*s;
	int	c;

	s = "banana";
	c = 110;

	printf("%s", ft_strchr(s,c));
}
*/
