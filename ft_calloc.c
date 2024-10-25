#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	char *p;
	size_t i;

	if (size == 0)
		return 0;
	
	p = malloc(nmemb * size);
	if (!p)
		return 0;
	while (nmemb > i)
		p[i++] = 0;
	return p;
}
