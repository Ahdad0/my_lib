#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int i = 0;

	while (lst)
	{
		i++;
		lst = lst->next;
	}

	return i;
}
