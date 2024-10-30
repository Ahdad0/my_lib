/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:26:14 by abahaded          #+#    #+#             */
/*   Updated: 2024/10/30 10:23:50 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		store;
	char	*p;

	p = (char *)s;
	i = 0;
	store = -1;
	while (p[i])
	{
		if (p[i] == (char)c)
			store = i;
		i++;
	}
	if (p[i] == (char)c)
		store = i;
	if (store != -1)
		return (p + store);
	return (NULL);
}
