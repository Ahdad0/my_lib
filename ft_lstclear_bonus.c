/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:58:32 by abahaded          #+#    #+#             */
/*   Updated: 2024/10/28 20:39:00 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		del(void *content);
void		ft_lstclear(t_list **lst, void (*del)(void *));

/*static void	add(t_list **head, void *v)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	new->content = v;
	new->next = *head;
	*head = new;
}*/

void	del(void *content)
{
	free(content);
}

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

/*int	main(void)
{
	t_list	*head;

	head = NULL;
	add(&head, "two");
	add(&head, "one");
	add(&head, "zero");
	ft_lstclear(&head, del);
	while (head)
	{
		head = head->next;
	}
}*/
