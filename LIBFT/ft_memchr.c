/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgennai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:09:37 by rgennai           #+#    #+#             */
/*   Updated: 2024/01/02 15:09:45 by rgennai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr( const void *ptr, int ch, size_t count )
{
	int		i;
	char	*str;	

	i = 0;
	str = (void *) ptr;
	if (ptr == NULL)
		return (NULL);
	while (str[i] != '\0' && i < count)
	{
		if (str[i] == ch)
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
