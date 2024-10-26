/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:26:14 by abahaded          #+#    #+#             */
/*   Updated: 2024/10/25 16:26:16 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	store;

	i = 0;
	store = 0;
	while (s[i])
	{
		if (s[i] == c)
			store = i;
		i++;
	}
	if (store != 0)
		return ((char *)&s[0] + store);
	return (0);
}
