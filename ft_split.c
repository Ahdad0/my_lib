/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:18:09 by abahaded          #+#    #+#             */
/*   Updated: 2024/10/25 16:18:10 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(char const *s, char c)
{
	int	i;
	int	cou;

	i = 0;
	cou = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i - 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			cou++;
		i++;
	}
	return (cou);
}

static void	free_p(char **s, unsigned int o)
{
	unsigned int	i;

	i = 0;
	while (i <= o)
	{
		free(s[i]);
	}
	free(s);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		o;
	int		start;
	char	**n;

	i = 0;
	o = 0;
	start = 0;
	n = malloc((count(s, c) + 1) * (sizeof(char *)));
	while (s[i])
	{
		if (s[i] == c)
		{
			n[o++] = ft_substr(s, start, i - start);
			start = i + 1;
		}
		i++;
	}
	n[o++] = ft_substr(s, start, i - start);
	n[o] = '\0';
	return (n);
}
