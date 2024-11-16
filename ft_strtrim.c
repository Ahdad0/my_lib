/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:23:27 by abahaded          #+#    #+#             */
/*   Updated: 2024/10/31 17:36:08 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_check_first(char *s1, char *set)
{
	size_t	i;
	size_t	j;
	size_t	c;

	i = 0;
	while (s1[i])
	{
		j = 0;
		c = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
				c = 1;
			j++;
		}
		if (!c)
			return (i);
		i++;
	}
	return (0);
}

static int	ft_check_last(char *s1, char *set)
{
	int		last;
	size_t	j;
	size_t	c;

	last = ft_strlen(s1) - 1;
	if (last < 0)
		return (0);
	while (last > 0)
	{
		j = 0;
		c = 0;
		while (set[j])
		{
			if (s1[last] == set[j])
				c = 1;
			j++;
		}
		if (!c)
			return (last);
		last--;
	}
	return (last);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	int		end;
	size_t	i;
	char	*p;
	size_t	sub;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	start = ft_check_first((char *)s1, (char *)set);
	end = ft_check_last((char *)s1, (char *)set);
	if (end != 0)
		sub = end - start + 1;
	else
		sub = end - start;
	p = malloc(sub + 1);
	if (!p)
		return (NULL);
	while (s1[start] && i < sub)
		p[i++] = s1[start++];
	p[i] = '\0';
	return (p);
}
