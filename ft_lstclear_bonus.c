/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:58:32 by abahaded          #+#    #+#             */
/*   Updated: 2024/11/01 14:39:20 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*new;

	while (*lst)
	{
		new = *lst;
		*lst = (*lst)->next;
		del(new->content);
		free(new);
	}
	*lst = NULL;
}
