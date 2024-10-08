/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:50:01 by lseeger           #+#    #+#             */
/*   Updated: 2024/10/08 10:01:49 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <printf.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

// static void    test(const char* c)
// {
//     printf("%s: %ld\n", c, ft_strlen(c));
// }

// int main(void)
// {
//     test("Haus");
//     test("a");
//     test("ab");
//     test("hh\0gg");
//     test("TT\tTT");
// }
