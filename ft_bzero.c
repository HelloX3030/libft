/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:53:27 by lseeger           #+#    #+#             */
/*   Updated: 2024/10/08 12:29:39 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

// #include <string.h>
// #include <stdlib.h>
// #include <unistd.h>

// void test(const char *s, size_t n)
// {
//     char    *buffer = malloc(strlen(s) + 1);
//     int     i;

//     if (buffer == NULL)
//         return;
//     strcpy(buffer, s);
//     ft_bzero(buffer, n);
//     i = 0;
//     while (i < n)
//     {
//         write(1, "0", 1);
//         i++;
//     }
//     while (s[i])
//     {
//         write(1, s + i, 1);
//         i++;
//     }
//     printf("\nOriginal: %s, Length: %ld", s, n);
//     fflush(stdout);
//     free(buffer);
// }

// int main(void)
// {
//     test("ABC", 1);
//     return (0);
// }
