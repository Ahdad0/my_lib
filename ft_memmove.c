#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d = (unsigned char *)dest;
	unsigned char *s = (unsigned char *)src;

	if (src > dest)
	{
		while (n--)
			*d++ = *s++;
	}
	else
		ft_memcpy(dest, src, n);
	return dest;
}
