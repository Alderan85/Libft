/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgennai <rgennai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:15:38 by rgennai           #+#    #+#             */
/*   Updated: 2024/06/27 12:05:12 by rgennai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
/*
int main()
{
    int *arr = ft_calloc(5, sizeof(int));
	int i = 0;
    if (arr == NULL)
    {
        printf("errore!\n");
        return 1;
    }
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;
    while (i < 5)
    {
        printf("%d ", arr[i]);
		i++;
    }
    free(arr);
    return 0;
}
*/