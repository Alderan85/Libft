/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgennai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:06:40 by rgennai           #+#    #+#             */
/*   Updated: 2024/01/02 16:06:47 by rgennai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcmp( const void *s1, const void *s2, size_t count )
{
	int		i;
	char	*str1;	
	char	*str2;

	i = 0;
	str1 = (void *) s1;
	str2 = (void *) s2;
	if (count == 0)
		return (0);
	while (str1[i] == str2[i] && i < count)
		i++;
	if (str1[i] == str2[i])
		return (0);
	else
		if (str1[i] > str2[i])
			return (str1[i]);
	return (str2[i]);
}
/*
int	main()
{
	char src1[7] = "Benana";
	char src2[7] = "Banana";	
	size_t count = 4;
	
	printf("%d",ft_memcmp(src1, src2, count));	
}
*/
