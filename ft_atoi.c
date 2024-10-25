#include "libft.h"

int ft_atoi(const char *nptr)
{
	int i = 0, store = 0, sign = 1;

	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		store = store * 10 + nptr[i] - '0';
		i++;
	}
	return sign * store;
}
