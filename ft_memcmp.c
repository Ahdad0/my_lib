/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:04:02 by abahaded          #+#    #+#             */
/*   Updated: 2024/10/28 14:48:36 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*f;
	unsigned char	*s;
	size_t			i;

	f = (unsigned char *)s1;
	s = (unsigned char *)s2;
	i = 0;
	while (f[i] == s[i] && n > i)
		i++;
	if (f[i] != s[i] && n > i)
		return (f[i] - s[i]);
	return (0);
}
