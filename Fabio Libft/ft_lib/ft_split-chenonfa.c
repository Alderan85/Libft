/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fane <fane@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 15:28:05 by fabnenci          #+#    #+#             */
/*   Updated: 2024/01/13 17:21:47 by fane             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_words(char const *s, char c)
{
    int i;
    size_t j;

    i = 0;
    j = 0;

    while (s[i] != '\0' )
    {
        if(s[i] == c && i != 0)
        {
            if (s[i + 1] != '\0')
            {
               j++;
            }
        }
        i++;
    }
    return(j);
}

char    *ft_writer(char const *s, size_t start, size_t end)
{
    size_t i;
    int pos;
    size_t len;
    char    *wrd;

    i = 0;
    pos = 0;
    len = end - start;
    wrd = (char*)malloc((len  + 1) * sizeof(char));
            while(i + start < end)
            {
                wrd[pos] = s[i + start];
                i++;
                pos++;
            }
    wrd[pos] = '\0';
    
   return(wrd);
}

char    **ft_split(char const *s, char c)
{
    size_t  words;
    char    **totalwords;
    char    **origtotalwords;
    size_t i;
   // size_t k;
    size_t start;
    size_t end;
    //k = 0;
    start = 0;
    i = 0;
    end = 0;
    
    words = ft_words(s,c);

    totalwords = (char**)malloc((words + 1) * sizeof(char*));

    origtotalwords = totalwords;

    if(!totalwords)
        return(NULL);

    while (s[i] == c)
            i++;
    while ( s[i] != '\0')
    {
       start = i;
       while (s[i] != c)
       {
        i++;
       }
       end = i;

    *totalwords = ft_writer(s,start,end);

    totalwords++;
    while (s[i] == c)
            i++;
    }

    *totalwords = NULL; // Aggiungi un elemento NULL alla fine
    return(origtotalwords);
}

int main() {
    char input[] = "This is a sample string";
    char **result = ft_split(input, ' ');

    if (result) {
        // Print the words
        for (int i = 0; result[i] != NULL; ++i) {
            printf("Word %d: %s\n", i + 1, result[i]);
            free(result[i]);  // Don't forget to free each word
        }

        free(result);  // Free the array of words
    } else {
        printf("Memory allocation error in ft_split\n");
    }

    return 0;
}