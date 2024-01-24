/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:07:04 by fabnenci          #+#    #+#             */
/*   Updated: 2024/01/24 17:12:01 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_lim(char s, char c)
{
	if (s == c || s == 0)
		return (1);
	return (0);
}

static size_t	ft_wordcount(char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && ft_lim(*s, c) == 1)
			s++;
		if (*s && ft_lim(*s, c) == 0)
		{
			count++;
			while (*s && ft_lim(*s, c) == 0)
				s++;
		}
	}
	return (count);
}

static	char	*ft_wdmall(char *s, char c)
{
	size_t	i;
	char	*wd;

	i = 0;
	while (s[i] && ft_lim(s[i], c) == 0)
		i++;
	wd = ft_calloc(sizeof (char), (i + 1));
	if (!wd)
		return (NULL);
	i = 0;
	while (s[i] && ft_lim(s[i], c) == 0)
	{
		wd[i] = s[i];
		i++;
	}
	return (wd);
}

static void	ft_free(char **res, int i)
{
	i--;
	while (i >= 0)
	{
		free(res[i]);
		i--;
	}
}

char	**ft_split(const char *s, char c)
{
	char			**res;
	size_t			i;

	res = ft_calloc(sizeof(char *), (ft_wordcount((char *)s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && ft_lim(*s, c) == 1)
			s++;
		if (*s && ft_lim(*s, c) == 0)
		{
			res[i] = ft_wdmall((char *)s, c);
			if (!res[i])
			{
				ft_free(res, i);
				return (NULL);
			}
			i++;
			while (*s && ft_lim(*s, c) == 0)
				s++;
		}
	}
	return (res);
}
