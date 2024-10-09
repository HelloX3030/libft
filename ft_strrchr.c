/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:46:01 by lseeger           #+#    #+#             */
/*   Updated: 2024/10/09 15:11:05 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	needle = (const char)c;
	int			i;

	i = ft_strlen(s);
	if (i == 0)
		return ((char *)(&s[i]));
	while (i >= 0 && s[i] != needle)
		i--;
	return ((char *)(&s[i]));
}
