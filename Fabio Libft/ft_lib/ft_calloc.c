/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:04:03 by fabnenci          #+#    #+#             */
/*   Updated: 2024/01/22 18:00:36 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;
	size_t			total;

	total = count * size;
	i = 0;
	tmp = malloc(total);
	if (!tmp)
		return (NULL);
	while (i < total)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}

/*
int main()
{
    int *arr = ft_calloc(5, sizeof(int));
    if (arr == NULL)
    {
        printf("errore di allocazione.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
*/
