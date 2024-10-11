/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hello_x <hello_x@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 11:57:13 by hello_x           #+#    #+#             */
/*   Updated: 2024/10/11 11:59:49 by hello_x          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = mallo(sizeof(t_list));
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
