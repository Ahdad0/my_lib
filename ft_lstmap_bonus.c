/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:02:54 by abahaded          #+#    #+#             */
/*   Updated: 2024/11/02 19:14:32 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_l;
	t_list	*new_n;
	t_list	*node;

	new_l = NULL;
	if (!lst || !del || !f)
		return (NULL);
	while (lst)
	{
		new_n = malloc(sizeof(t_list));
		if (!new_n)
		{
			ft_lstclear(&new_l, del);
			return (NULL);
		}
		new_n->content = f(lst->content);
		new_n->next = NULL;
		if (!new_l)
			new_l = new_n;
		else
			node->next = new_n;
		lst = lst->next;
		node = new_n;
	}
	return (new_l);
}
