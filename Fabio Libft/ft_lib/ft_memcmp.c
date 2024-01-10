/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:05:23 by fabnenci          #+#    #+#             */
/*   Updated: 2024/01/02 16:30:15 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	counter;
	counter = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;

	if (n == 0)
		return(0);

		while (str1[counter] == str2[counter] && counter < n)
		{
			counter++;
		}
		if (str1[counter] == str2[counter])
		return(0);

		if (str1[counter] > str2[counter])
			return(str1[counter]);
		else
			return(str2[counter]);
}
		int main()
		{
			char uno[] = "banana";
			char due[] = "benana";
			int let = 2;
			printf("%d", memcmp(uno, due, let));
		}

