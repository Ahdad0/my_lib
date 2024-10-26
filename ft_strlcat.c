/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:21:31 by abahaded          #+#    #+#             */
/*   Updated: 2024/10/25 16:21:33 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	lenght;
	int				i;
	int				s;

	s = ft_strlen(dst);
	i = 0;
	lenght = ft_strlen(src) + ft_strlen(dst);
	if (size > 0)
	{
		while (src[i] && size > i)
		{
			dst[s] = src[i++];
			s++;
		}
		dst[s] = '\0';
	}
	return (lenght);
}
