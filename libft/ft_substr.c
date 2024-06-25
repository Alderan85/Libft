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
	size_t	s_len;

	i = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		tmp = (char *)malloc(1 * sizeof(char));
		if (!tmp)
			return (NULL);
		tmp[0] = '\0';
		return (tmp);
	}
	if (start + len > s_len)
		len = s_len - start;
	tmp = (char *)malloc((len + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	while (i < len && s[start + i] != '\0')
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
