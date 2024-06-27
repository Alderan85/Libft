/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgennai <rgennai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:05:56 by rgennai           #+#    #+#             */
/*   Updated: 2024/06/27 11:31:05 by rgennai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	i;
	size_t	sum;

	sum = ft_strlen(s1) + ft_strlen(s2) + 1;
	i = 0;
	str = (char *) malloc(sum * sizeof(char));
	if (!str)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		str[(ft_strlen(s1)) + i] = s2[i];
		i++;
	}
	str[(ft_strlen(s1)) + i] = '\0';
	return (str);
}
/*
int main()
{
	char s1[7] = "Banana";
	char s2[4] = "JOE";
	
	printf("%s", ft_strjoin(s1,s2));
}
*/
