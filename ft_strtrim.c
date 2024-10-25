#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int i = 0, j, c = 0, s = 0;
	char *l;

	while (s1[i])
	{
		j = c = 0;
		while (set[j])
		{
			if (s1[i] == set[j++])
			{
				c++;
				break;
			}
		}
		if (c == 0)
		{
			if (!s)
				s = i;
		}
		else
		{
			if (s)
				break;
		}
		i++;
	}
	l = ft_substr(s1, s, i - s);
	if (!l)
		return (NULL);
	return l;
}
