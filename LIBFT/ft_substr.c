/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgennai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:22:00 by rgennai           #+#    #+#             */
/*   Updated: 2024/01/10 15:22:03 by rgennai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	if (ft_strlen(s) < len)
		len = ft_strlen(s) - (start - 1);
	tmp = (char *) malloc(len * sizeof(char) + 1);
	if (!tmp)
		return (NULL);
	while (i < len)
	{
		tmp[i] = s[start + i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
/*/
int	main()
{
	char	src[7] = "banana";
	int	index = 3;
	size_t	len = 4;
	
	printf("%s", ft_substr(src, index, len));
}
*/