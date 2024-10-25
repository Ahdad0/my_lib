#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *p;

	p = ft_calloc(len + 1, sizeof(char));
	ft_memcpy(p, s + start, len);
	return p;
}
