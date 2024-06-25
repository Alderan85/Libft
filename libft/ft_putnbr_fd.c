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

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	nb = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nb = n * (-1);
	}
	if (nb > 9)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd((nb % 10) + '0', fd);
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
