#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int i = 0;
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return d;
}
