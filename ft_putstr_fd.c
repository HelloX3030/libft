/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hello_x <hello_x@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:09:15 by hello_x           #+#    #+#             */
/*   Updated: 2024/10/10 15:10:58 by hello_x          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

int	main(void)
{
	ft_putstr_fd("ABC", 1);
}
