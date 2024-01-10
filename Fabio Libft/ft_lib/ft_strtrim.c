/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:35:04 by fabnenci          #+#    #+#             */
/*   Updated: 2024/01/10 17:38:41 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	charcheck(const char *set, char a)
{
	int	i;

	i = 0;
	while ( set[i] != '\0' )
	{
		if (set[i] == a)
			{
				return (1);
			}
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
if(!set)
	return(ft_strdup());

	while(charcheck(set, s1[i]))
	{
		i++;
	}
}
