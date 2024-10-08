/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:48:23 by lseeger           #+#    #+#             */
/*   Updated: 2024/10/08 12:30:47 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// #include <stdio.h>
// #include <printf.h>

// int main(void)
// {
// 	for (int i = 0; i < 127; i++)
// 		printf("%c: %i\n", i, ft_isalnum(i));
// }
