/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgennai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:46:03 by rgennai           #+#    #+#             */
/*   Updated: 2024/01/19 14:46:06 by rgennai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int i)
{
	if (i >= 48 && i <= 57)
	{
		return (1);
	}
	return (0);
}
/*int	main(void)
{
	for (int i = 0; i < 127; ++i)
	{
		if (ft_isdigit(i))
			printf("My function-> %c is a digit\n", i);
		if (isdigit(i))
			printf("Real function-> %c is a digit\n\n\n", i);
	}
}
*/
