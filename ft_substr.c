/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:06:52 by abahaded          #+#    #+#             */
/*   Updated: 2024/10/31 17:15:07 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:24:45 by abahaded          #+#    #+#             */
/*   Updated: 2024/10/30 11:07:11 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_zero(void)
{
	char	*p;

	p = malloc(1);
	if (!p)
		return (NULL);
	p[0] = '\0';
	return (p);
}

static int	strl(char *s, size_t len)
{
	size_t	i;

	i = 0;
	while (s[i] && i < len)
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	l;

	l = 0;
	if (ft_strlen(s) >= start)
		l = strl((char *)s + start, len);
	if (ft_strlen(s) <= start || l == 0)
		return (ft_zero());
	i = 0;
	p = malloc(l + 1);
	if (!p)
		return (NULL);
	while (s[start] && i < len)
		p[i++] = s[start++];
	p[i] = '\0';
	return (p);
}
