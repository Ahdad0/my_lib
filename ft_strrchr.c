#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i = 0, store = 0;

	while (s[i])
	{
		if (s[i] == c)
			store = i;
		i++;
	}
	if (store != 0)
		return (char *)&s[0] + store;
	return (0);
}
