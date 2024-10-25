#include "libft.h"
#include <stdio.h>

static void add(t_list **head, void *v)
{
	t_list *new = malloc(sizeof(t_list));

	new->content = v;
	new->next = *head;

	*head = new;
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *temp = *lst;

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
