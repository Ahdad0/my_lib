#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *f = (unsigned char *)s1;
	unsigned char *s = (unsigned char *)s2;
	unsigned int i = 0;

	while ((f[i] || s[i]) && n > i)
	{
		if (f[i] != s[i])
			return (f[i] - s[i]);
		i++;
	}
	return 0;
}
