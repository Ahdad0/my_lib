#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int len_of_src = 0, i = 0;

	len_of_src = ft_strlen(src);

	if (size > 0)
	{
		while (src[i] && size > i)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return len_of_src;
}
