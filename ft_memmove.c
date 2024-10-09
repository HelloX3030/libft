/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:42:45 by lseeger           #+#    #+#             */
/*   Updated: 2024/10/09 13:27:01 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_ptr;
	unsigned char	*src_ptr;
	size_t			i;

	if (len <= 0 || dst == src)
		return (dst);
	dst_ptr = (unsigned char *)dst;
	src_ptr = (unsigned char *)src;
	i = len;
	while (--i > 0)
		dst_ptr[i] = src_ptr[i];
	dst_ptr[i] = src_ptr[i];
	return (dst);
}
