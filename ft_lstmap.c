#include "libft.h"
#include <stdio.h>


static void add(t_list **head, void *v);
void del(void *content);
void *f(void *content);
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new = malloc(sizeof(t_list));
	t_list *temp;

	while (lst)
	{
		add(&new, f(lst->content));
		temp = lst;
		lst = lst->next;
		free(temp);
	}
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
void *f(void *content)
{
	return "a";
}
int main()
{
	t_list *head = NULL;

	add(&head, "two");
	add(&head, "one");
	add(&head, "zero");

	t_list *new = ft_lstmap(head, f, del);

	while (new)
	{
		printf("%s\n", (char *)new->content);
		new = new->next;
	}
}
