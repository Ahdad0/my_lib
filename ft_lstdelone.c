#include "libft.h"
#include <stdio.h>


static void add(t_list **head, void *v);
void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	free(lst);
}

static void add(t_list **head, void *v)
{
	t_list *new = malloc(sizeof(t_list));

	new->content = v;
	new->next = *head;

	*head = new;
}

void del(void *content)
{
	free(content);
}

int main()
{
	t_list *head = NULL;

	add(&head, "two");
	
	ft_lstdelone(head, del);

	/*while (head)
	{*/
		printf("%s\n", (char *)(head->content));
		/*head = head->next;
	}*/
}
