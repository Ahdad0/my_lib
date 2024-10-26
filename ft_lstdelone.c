/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:58:47 by abahaded          #+#    #+#             */
/*   Updated: 2024/10/25 15:58:52 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	free(lst);
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

/*int	main(void)
{
	t_list	*head;

	head = NULL;
	add(&head, "two");
	ft_lstdelone(head, del);
	while (head)
	{
	printf("%s\n", (char *)(head->content));
	head = head->next;
}*/
