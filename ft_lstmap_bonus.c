/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:02:54 by abahaded          #+#    #+#             */
/*   Updated: 2024/10/31 22:51:13 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	while (lst)
	{
		ft_lstadd_back(&new, f(lst->content));
		temp = lst;
		lst = lst->next;
		del(temp->content);
		free(temp);
	}
	return (new);
}
