/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:23:27 by abahaded          #+#    #+#             */
/*   Updated: 2024/10/25 22:23:56 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	check(char const s1, char const *set)
{
	int	c;
	int	j;

	j = 0;
	c = 0;
	while (set[j])
	{
		if (s1 == set[j++])
			c++;
	}
	return (c);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		c;
	int		start;
	int		done;

	done = 0;
	i = 0;
	while (s1[i])
	{
		j = 0;
		c = check(s1[i], set);
		if (!c && !done)
		{
			start = i;
			done = 1;
		}
		else if (c && done)
			break ;
		i++;
	}
	return (ft_substr(s1, start, i - start));
}
