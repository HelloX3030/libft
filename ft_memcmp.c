/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hello_x <hello_x@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 08:24:42 by hello_x           #+#    #+#             */
/*   Updated: 2024/10/10 08:29:30 by hello_x          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_ptr;
	unsigned char	*s2_ptr;
	size_t			i;

	s1_ptr = (unsigned char *) s1;
	s2_ptr = (unsigned char *) s2;
	i = 0;
	while (s1_ptr[i] == s2_ptr[i] && i < n)
		i++;
	return (s1_ptr[i] - s2_ptr[i]);
}
