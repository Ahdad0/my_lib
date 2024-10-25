#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int len = ft_strlen(s),i = 0;
	char *p = malloc(len + 1);
	if (!p)
		return (NULL);

	while (s[i])
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return p;
}
