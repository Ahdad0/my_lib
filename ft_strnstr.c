#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int i = 0, j = 0;

	if (!little)
		return (char *)big;
	while (big[i])
	{
		while (big[i + j] == little[j])
		{
			if (j == len - 1)
				return ((char *)big + i);
			j++;
		}
		j = 0;
		i++;
	}
	return 0;
}
