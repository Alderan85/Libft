/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:13:49 by fabnenci          #+#    #+#             */
/*   Updated: 2024/01/22 18:00:02 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	number;

	sign = 0;
	number = 0;
	while ((*str >= 9 && *str <= 31) || *str == 32)
	{
		++str;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign++;
		++str;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10 + *str;
		number -= 48;
		++str;
	}
	if (!(sign % 2))
		return (number);
	return (-number);
}
