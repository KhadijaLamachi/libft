/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamachi <klamachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:09:18 by klamachi          #+#    #+#             */
/*   Updated: 2024/11/12 09:49:54 by klamachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;
	t_list	*node;

	if (!lst || !del)
		return ;
	curr = *lst;
	while (curr != NULL)
	{
		node = curr;
		curr = curr->next;
		del(node->content);
		free(node);
	}
	*lst = NULL;
}
