/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dganapat <dganapat@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 07:21:06 by dganapat          #+#    #+#             */
/*   Updated: 2025/11/03 09:28:02 by dganapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
        write(fd, &c, 1);
}*/


void ft_putnbr_fd(int n, int fd)
{
	int long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr_fd((nb/10), fd);

	ft_putchar_fd(((nb % 10) + '0'), fd);
}
/*int	main(void)
{
	int	n;
	int	fd;

	n = -2147483648;
	fd = 1;

	ft_putnbr_fd(n, fd);
	return (0);
}*/
