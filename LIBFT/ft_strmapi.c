/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgennai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:36:15 by rgennai           #+#    #+#             */
/*   Updated: 2024/01/19 14:36:18 by rgennai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*result;

	i = 0;
	if (!s || !f)
		return (NULL);
	result = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (i < ft_strlen(s))
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*
//QUESTA VA COMMENTATA INSIEME AL MAIN
char test(unsigned int index, char c)
{
    return ('B');
}

int main() 
{
    char input[] = "Banana Joe Banana";    
    char *result = ft_strmapi(input, &test);

    if (result) 
    {
        printf("Original string: %s\n", input);
        printf("Modified string: %s\n", result);
        free(result);
    } 
    else 
    {
        printf("Memory allocation error in ft_strmapi\n");
    }    
    return 0;
    }
    */
