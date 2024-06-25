/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgennai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:39:13 by rgennai           #+#    #+#             */
/*   Updated: 2024/06/19 14:39:19 by rgennai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static int	ft_find_start(char const *s, char c, int i)
{
	while (s[i] == c && s[i])
		i++;
	return (i);
}

static char	*ft_word_writer(char const *s, unsigned int start, size_t len)
{
	char	*word;
	size_t	i;

	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		word[i] = s[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	**ft_free_result(char **result)
{
	int	i;

	i = 0;
	while (result[i])
		free(result[i++]);
	free(result);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		start;
	int		count;

	i = 0;
	count = 0;
	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!result)
		return (NULL);
	while (ft_count_words(s, c) > count)
	{
		start = ft_find_start(s, c, i);
		i = start;
		while (s[i] && s[i] != c)
			i++;
		result[count] = ft_word_writer(s, start, i - start);
		if (!result[count])
			return (ft_free_result(result));
		count++;
	}
	result[count] = NULL;
	return (result);
}
/*
int main() {
    char input[] = "  Banana Joe    Banana TTT ";
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
*/
