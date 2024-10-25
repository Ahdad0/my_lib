#include "libft.h"
#include <stdio.h>


static void add(t_list **head, void *v);
void ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

static void add(t_list **head, void *v)
{
	t_list *new = malloc(sizeof(t_list));

	new->content = v;
	new->next = *head;

	*head = new;
}
void f(void *content)
{
	content = "ff";
}
int main()
{
	t_list *head = NULL;

	add(&head, "two");
	add(&head, "one");
	add(&head, "zero");

	ft_lstiter(head, f);

	while (head)
	{
		printf("%s\n", (char *)head->content);
		head = head->next;
	}
}
