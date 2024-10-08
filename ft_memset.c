/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:49:48 by lseeger           #+#    #+#             */
/*   Updated: 2024/10/08 12:32:33 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char) c;
		i++;
	}
	return (s);
}

// #include <string.h>
// #include <stdlib.h>
// #include <printf.h>

// void test(const char *s, int c, size_t n)
// {
//     char    *buffer = malloc(strlen(s) + 1);

//     if (buffer == NULL)
//         return;
//     strcpy(buffer, s);
//     ft_memset(buffer, c, n);
//     printf("Original: %s, Character to set: '%c', 
//          Length: %ld, Modified: %s\n",
//            s, c, n, buffer);
//     free(buffer);
// }

// int main(void)
// {
//     test("ABC", 'r', 2);
//     return (0);
// }
