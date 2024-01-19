/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgennai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:46:03 by rgennai           #+#    #+#             */
/*   Updated: 2024/01/19 14:46:06 by rgennai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
// COMMENTARE INSIEME AL MAIN
void test(unsigned int i, char *c) 
{
    *c = 97 + i ;
}

int main() 
{
    char input[] = "Banana Joe Banana";
    printf("Original string: %s\n", input);
    ft_striteri(input, &test);
    printf("Modified string: %s\n", input);
    return 0;
}
*/
