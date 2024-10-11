/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hello_x <hello_x@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:15:38 by hello_x           #+#    #+#             */
/*   Updated: 2024/10/11 12:24:02 by hello_x          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	clear_helper(t_list *lst, void (*del)(void*))
{
	if (lst->next == NULL)
		ft_lstdelone(lst, del);
	else
	{
		clear_helper(lst->next, del);
		ft_lstdelone(lst, del);
	}
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	clear_helper(*lst, del);
	*lst = NULL;
}
