/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fane <fane@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:15:56 by fabnenci          #+#    #+#             */
/*   Updated: 2024/01/11 19:11:33 by fane             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
		{
			return((char *)c);
			s++;
		}

	}
	if (c == '\0')
		return((char *)c);
	return(0);
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
