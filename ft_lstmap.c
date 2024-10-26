/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:02:54 by abahaded          #+#    #+#             */
/*   Updated: 2024/10/25 16:02:56 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	new = malloc(sizeof(t_list));
	while (lst)
	{
		add(&new, f(lst->content));
		temp = lst;
		lst = lst->next;
		free(temp);
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

void	del(void *content)
{
	free(content);
}

void	*f(void *content)
{
	return ("a");
}
/*int	main(void)
{
	t_list	*head;
	t_list	*new;

	head = NULL;
	add(&head, "two");
	add(&head, "one");
	add(&head, "zero");
	new = ft_lstmap(head, f, del);
	while (new)
	{
		printf("%s\n", (char *)new->content);
		new = new->next;
	}
}*/
