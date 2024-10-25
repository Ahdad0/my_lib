#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int lenght, i = 0, s = ft_strlen(dst);

	lenght = ft_strlen(src) + ft_strlen(dst);
	if (size > 0)
	{
		while (src[i] && size > i)
		{
			dst[s] = src[i++];
			s++;
		}
		dst[s] = '\0';
	}
	return lenght;
}
