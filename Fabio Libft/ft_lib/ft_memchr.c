/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:11:11 by fabnenci          #+#    #+#             */
/*   Updated: 2024/01/22 17:05:14 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	int		counter;

	counter = 0;
	str = (void *)s;
	if (s == NULL)
		return (NULL);
	while (str[counter] != '\0' && counter < n)
	{
		if (str[counter] == c)
			return (&str[counter]);
		else
			counter++;
	}
	return (NULL);
}
/*
int main () {
   const char s[] = "banana";
   const char c = 'a';
   size_t n = 4;

   printf("%s",ft_memchr(s, c, n));
}
*/
