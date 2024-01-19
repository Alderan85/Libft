/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgennai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:31:37 by rgennai           #+#    #+#             */
/*   Updated: 2024/01/19 15:31:39 by rgennai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned char	c;

	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(fd, "-2147483648", 11);
			return ;
		}
		else
		{
			write(fd, "-", 1);
			nb = -nb;
			ft_putnbr_fd (nb, fd);
			return ;
		}
	}
	if (nb > 9)
	{
		ft_putnbr_fd (nb / 10, fd);
	}
	c = (nb % 10) + 48;
	write(fd, &c, 1);
}
/*
int	main(void)
{
	ft_putnbr_fd(0,1);
	write(1, "\n", 1);
	ft_putnbr_fd(2147483647,1);
	write(1, "\n", 1);
	ft_putnbr_fd(-2147483648,1);
	write(1, "\n", 1);
	ft_putnbr_fd(500,1);
	write(1, "\n", 1);
	ft_putnbr_fd(-500,1);
	write(1, "\n", 1);
}
*/
