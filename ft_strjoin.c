/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:19:50 by abahaded          #+#    #+#             */
/*   Updated: 2024/10/28 21:39:23 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*p;

	len = ft_strlen(s1) + ft_strlen(s2);
	p = ft_calloc(len, sizeof(char));
	ft_strlcpy(p, s1, ft_strlen(s1));
	ft_strlcat(p, s2, ft_strlen(s2));
	return (p);
}
