#include "libft.h"
#include <stdio.h>

static void addnode(t_list **head, void *content)
{
	t_list *new = malloc(sizeof(t_list));

	new->content = content;
	new->next = *head;

	*head = new;
}

int main()
{
	t_list *head = NULL;
	t_list *new = NULL;

	addnode(&head, (void *)"two");
	addnode(&head, (void *)"one");
	addnode(&head, (void *)"zero");

	new = ft_lstlast(head);
	printf("%s\n", (char *)new->content);
	/*while (head)
	{
		printf("%s.\n", (char *)(head->content));
		head = head->next;
	}*/
}
