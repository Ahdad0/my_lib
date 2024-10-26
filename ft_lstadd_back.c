/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:57:54 by abahaded          #+#    #+#             */
/*   Updated: 2024/10/25 15:58:02 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	add(t_list **head, void *v)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	new->content = v;
	new->next = *head;
	*head = new;
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	new->next = NULL;
}

/*int main()
{
	t_list *head = NULL;
	t_list *new = NULL;

	add(&head, "two");
	add(&head, "one");
	add(&new, "three");

	ft_lstadd_back(&head, new);

	while (head)
	{
		printf("%s\n", (char *)(head->content));
		head = head->next;
	}
}*/
