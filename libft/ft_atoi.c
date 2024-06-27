/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgennai <rgennai@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:46:03 by rgennai           #+#    #+#             */
/*   Updated: 2024/01/19 14:46:06 by rgennai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	long	number;

	sign = 1;
	number = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		++str;
	}
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		++str;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10 + (*str - '0');
		++str;
	}
	return (number * sign);
}
/*
int main()
{
        char test1[4] ="111";
        char test2[5] ="-222";
        char test3[2] ="0";
        char test4[11] ="2147483647";
        char test5[12] ="-2147483648";
        char test6[6] ="-+-10";

        printf("%d\n",ft_atoi(test1));
        printf("%d\n",ft_atoi(test2));
        printf("%d\n",ft_atoi(test3));
        printf("%d\n",ft_atoi(test4));
        printf("%d\n",ft_atoi(test5));
        printf("%d\n",ft_atoi(test6));
}
*/	
