/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:51:37 by lseeger           #+#    #+#             */
/*   Updated: 2024/10/09 12:51:40 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	if (dest == NULL && src == NULL)
		return (dest);
	dest_ptr = (unsigned char *) dest;
	src_ptr = (unsigned char *) src;
	while (--n != SIZE_T_MAX)
		dest_ptr[n] = src_ptr[n];
	return (dest);
}
