/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:57:38 by fabnenci          #+#    #+#             */
/*   Updated: 2023/12/04 17:57:46 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>
#include "libft.h"
//#include <stdlib.h>
int	ft_intlen(int n)
{
	int len;
	len = 0;
	if (n <= 0)
	{
		len++;
	}
	while(n != 0)
	{
		n = n / 10;
		len++;
	}
	return(len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int	len;
	int	nbr;
	nbr = 0;
	len = ft_intlen(n);
	str = (char*)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	
	if (n == 0)
	{
		str[nbr] = '0';
	}
	if (n < 0)
	{
		str[nbr] = '-';
		n = -n;
	}
	str[len] = '\0';
	while (n != 0)
	{
		str[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	
	return(str);
}

int	main()
{
	printf("%s",ft_itoa(0));
	//*ft_itoa(0);
}
