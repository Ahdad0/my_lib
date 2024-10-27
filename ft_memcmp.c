/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:04:02 by abahaded          #+#    #+#             */
/*   Updated: 2024/10/27 22:51:38 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*f;
	unsigned char	*s;
	size_t			i;

	f = (unsigned char *)s1;
	s = (unsigned char *)s2;
	i = 0;
	while (f[i] == s[i] && n < i)
		i++;
	if (f[i] != s[i] && n < i)
		return (f[i] - s[i]);
	return (0);
}
#include <stdio.h>
#include <string.h>
int main()
{
	int a[] = {1, 2, 3};
	int b[] = {1, 3, 2};
	printf("my=%d\n", ft_memcmp(a, b, sizeof(int) * 3));
	printf("%d\n", memcmp(a, b, sizeof(int) * 3));
}
