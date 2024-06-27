/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgennai <rgennai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:09:37 by rgennai           #+#    #+#             */
/*   Updated: 2024/06/27 11:30:18 by rgennai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr( const void *ptr, int ch, size_t count )
{
	size_t			i;
	unsigned char	*str;	

	i = 0;
	str = (unsigned char *) ptr;
	while (i < count)
	{
		if (str[i] == (unsigned char)ch)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	char src[7] = "Banana";
	int ch = 'a';
	size_t count = 5;
	
	printf("%s",ft_memchr(src, ch, count));	
}
*/
