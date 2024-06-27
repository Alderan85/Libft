/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgennai <rgennai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:23:29 by rgennai           #+#    #+#             */
/*   Updated: 2024/06/27 12:03:18 by rgennai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	c;
	size_t	d;

	if (destsize <= ft_strlen(dest))
		return (destsize + ft_strlen(src));
	c = ft_strlen(dest);
	d = 0;
	while (src[d] != '\0' && c + 1 < destsize)
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	dest[c] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[d]));
}
/*
int main()
{
    char source[] = " joe";
    char dest[20] = "Banana";
    size_t result;

    result = ft_strlcat(dest, source, sizeof(dest));
    printf("Result: %s\n", dest);
    printf("Total: %zu\n", result);

    return 0;
}
*/
