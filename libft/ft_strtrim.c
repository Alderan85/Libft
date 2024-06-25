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
	char	*trm;
	int		i;
	int		y;
	int		len;

	len = ft_strlen(s1);
	i = 0;
	y = 0;
	while (i < len && checkchar(set, s1[i]))
	{
		i++;
	}
	while (len > i && checkchar(set, s1[len - 1]))
	{
		len--;
	}
	trm = malloc(sizeof(char) * (len - i + 1));
	if (!trm)
		return (NULL);
	while (i < len)
	{
		trm[y++] = s1[i++];
	}
	trm[y] = '\0';
	return (trm);
}

/*
int main()
{
	const char *s1 = "  Hello World  ";
	const char *set = " ";
	char *result = ft_strtrim(s1, set);

	if (result)
	{
		printf("Trimmed string: '%s'\n", result);
		free(result); // Ricorda di liberare la memoria allocata
	}
	else
	{
		printf("Memory allocation failed\n");
	}

	return 0;
}
*/
