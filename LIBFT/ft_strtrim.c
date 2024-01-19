/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgennai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:32:09 by rgennai           #+#    #+#             */
/*   Updated: 2024/01/10 16:32:11 by rgennai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkchar(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	int		i;
	int		x;
	int		j;

	j = 0;
	i = 0;
	x = 0;
	while (checkchar(set, s1[i]))
		i++;
	while (checkchar(set, s1[ft_strlen(s1) - 1 - x]))
		x++;
	str = (char *) malloc(ft_strlen(s1) * sizeof(char) - (i + x) + 1);
	if (!str)
		return (NULL);
	while (i < ft_strlen(s1) - x)
	{
		str[j] = s1[i];
		j++;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char s1[7] = "Btvaka";
	char s2[3] = "ta";

	printf("%s", ft_strtrim(s1,s2));
}
*/
