#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned int i = 0;
	unsigned char *p = (unsigned char *)s;

	while (i < n)
	{
		if (p[i] == c)
			return (&p[i]);
		i++;
	}
	return 0;
}
