/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:34:07 by fabnenci          #+#    #+#             */
/*   Updated: 2024/01/19 15:01:57 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char	*str;

	i = 0;

	str = malloc(sizeof(char) * (ft_strlen(s)) + 1);

	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';

	return (str);
}
/*
char	cacca(unsigned int n , char c)
{
	return(97 + n);

}

int	main()
{
	char	asd[7] = "banana";

	printf("%s",ft_strmapi(asd,cacca));


}
*/
