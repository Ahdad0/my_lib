#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	unsigned int i;
	unsigned char *p;

	i = 0;
	p = (unsigned char *)s;
	while (n > i)
	{
		p[i] = '0';
		i++;
	}
}
