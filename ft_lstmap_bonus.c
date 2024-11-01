/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:02:54 by abahaded          #+#    #+#             */
/*   Updated: 2024/11/01 12:07:02 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static void	add(t_list **head, void *v, void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	temp = *head;
	new = malloc(sizeof(t_list));
	if (!new)
	{
		ft_lstclear(head, del);
		return;
	}
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		new->next = NULL;
		temp->next = new;
	}
	new->content = v;
}*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list *new;

	new = NULL;
	head = NULL;
	if (lst)
	{
		new = malloc(sizeof(t_list));
		if (!new)
		{
			free(new);
			return (NULL);
		}
		lst->content = f(lst->content);
		new->content = lst->content;
		new->next = NULL;
		head = new;
		if (lst->next)
			lst = lst->next;
	}
	while (lst)
	{
		new = malloc(sizeof(t_list));
		if (!new)
		{
			free(new);
			ft_lstclear(&head, del);
			return (NULL);
		}
		lst->content = f(lst->content);
		new->content = lst->content;
		ft_lstadd_back(&head, new);
		lst = lst->next;
	}
	return (head);
}
