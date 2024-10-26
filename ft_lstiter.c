/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:01:20 by abahaded          #+#    #+#             */
/*   Updated: 2024/10/25 16:01:21 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

static void	add(t_list **head, void *v)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	new->content = v;
	new->next = *head;
	*head = new;
}

void	f(void *content)
{
	content = "ff";
}
/*int	main(void)
{
	t_list	*head;

	head = NULL;
	add(&head, "two");
	add(&head, "one");
	add(&head, "zero");
	ft_lstiter(head, f);
	while (head)
	{
		printf("%s\n", (char *)head->content);
		head = head->next;
	}
}*/
