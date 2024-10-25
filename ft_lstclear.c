#include "libft.h"


void del(void *content);
void ft_lstclear(t_list **lst, void (*del)(void*));

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

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *new;

	while (*lst)
	{
		new = *lst;
		*lst = (*lst)->next;
		free(new);
	}
	*lst = NULL;
}

int main()
{
	t_list *head = NULL;

	add(&head, "two");
	add(&head, "one");
	add(&head, "zero");
	
	ft_lstclear(&head, del);

	while (head)
	{
		head = head->next;
	}
}
