#include "libft.h"

size_t ft_strlen(const char *s)
{
	unsigned int i = 0;

	while (s[i])
		i++;
	return (i);
}
