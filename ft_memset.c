#include "libft.h"

void *ft_memset(void *str, int c, size_t n)
{
	unsigned int i;
	unsigned char *ptr;

	i = 0;
	ptr = (unsigned char *)str;
	while (n > i)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}
