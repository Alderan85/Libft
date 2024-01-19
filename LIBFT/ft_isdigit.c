/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgennai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:35:11 by rgennai           #+#    #+#             */
/*   Updated: 2023/12/18 10:35:18 by rgennai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int i)
{
	if (i >= 48 && i <= 57)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	i;
	i = '5';
	
	if (ft_isdigit(i))
		printf("OH YEAH");
	else
		printf("OH NOOO");	
}
*/