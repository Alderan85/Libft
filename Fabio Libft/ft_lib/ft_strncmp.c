/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fane <fane@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:38:03 by fane              #+#    #+#             */
/*   Updated: 2024/01/09 18:04:03 by fane             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 0;

    while( s1[i] != '\0' && i < n)
        {
            if (s1[i] != s2[i])
                return(s1[i] - s2[i]);
            i++;
        }
    
    return(0);
}
/*
int main()
{
	 char source[7] = "banana";
	 char dest[7] = "banana";
	 
	 printf("%d",ft_strncmp(source,dest, 0));
}
*/