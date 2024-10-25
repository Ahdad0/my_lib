#include "libft.h"

static int ft_l(int n)
{
	int i = 0;
	
	n = (n > 0) ? n : -n;
	if (n == 0)
		return 1;
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return i;
}

char *ft_itoa(int n)
{
	int len, i = 0, j = 0;
	char *ptr, temp[1024];

	len = ft_l(n);
	if (n <= -1)
		ptr = malloc(len + 2);
	else
		ptr = malloc(len + 1);

	if (n == 0)
	{
		ptr[0] = '0';
		ptr[1] = '\0';
		return ptr;
	}
	if (n < 0)
	{
		n = -n;
		ptr[i] = '-';
		i++;
	}
	while (n != 0)
	{
		temp[j++] = n % 10 + '0';
		n /= 10;
	}
	j--;
	while (j >= 0)
	{
		ptr[i++] = temp[j--];
	}
	ptr[i] = '\0';
	return ptr;
}
