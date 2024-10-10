/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hello_x <hello_x@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 08:30:43 by hello_x           #+#    #+#             */
/*   Updated: 2024/10/10 08:42:06 by hello_x          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*new_str;
	const int	s_len = ft_strlen(s);

	new_str = malloc(s_len);
	ft_strlcpy(new_str, s, s_len);
	return (new_str);
}
