/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hello_x <hello_x@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:14:43 by hello_x           #+#    #+#             */
/*   Updated: 2024/10/10 15:27:53 by hello_x          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void ft_putnbr_fd(int n, int fd)
{
	if (n == INT_MIN)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n <= 9)
		write(fd, &"0123456789"[n], 1);
	else
	{
		ft_putnbr_fd(n / 10, fd);
		write(fd, &"0123456789"[n % 10], 1);
	}
}

int	main(void)
{
	ft_putnbr_fd(-1234567890, 1);
}
