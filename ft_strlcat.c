/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hello_x <hello_x@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 09:47:10 by hello_x           #+#    #+#             */
/*   Updated: 2024/10/14 08:28:26 by hello_x          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i] && i < size)
		i++;
	j = 0;
	while (src[j] && i + j < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = 0;
	return (i + j);
}

// int	main(void)
// {
// 	const char		*src = "ABC";
// 	const size_t	dst_size = 20;
// 	char			*dst;

// 	dst = malloc(sizeof(char) * dst_size);
// 	ft_strlcpy(dst, "Moin", dst_size);
// 	printf("%s + %s: ", dst, src);
// 	ft_strlcat(dst, src, dst_size);
// 	printf("%s\n", dst);
// 	free(dst);
// 	return (0);
// }
