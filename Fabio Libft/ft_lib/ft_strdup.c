/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fane <fane@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:24:35 by fane              #+#    #+#             */
/*   Updated: 2024/01/09 17:35:21 by fane             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *str)
{
    char    *cpy;
    size_t  i;

    i = 0;

    cpy = (char*) malloc(ft_strlen(str) + 1);

    if (!cpy)
        return(NULL);
    
    while (str[i] != '\0')
    {
        cpy[i] = str[i];
        i++;
    }
    cpy[i] = '\0';
    
    return(cpy);
}
/*
int main()
{
    char src[7] = "banana";
    
    printf("%s",ft_strdup(src));
}
*/