/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hello_x <hello_x@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 08:33:01 by hello_x           #+#    #+#             */
/*   Updated: 2024/10/10 08:34:52 by hello_x          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*new_memory;
	int				i;

	new_memory = malloc(nmemb * size);
	i = 0;
	while (i < size)
	{
		new_memory[i] = 0;
		i++;
	}
	return (new_memory);
}
