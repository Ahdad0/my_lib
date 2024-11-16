/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 21:34:11 by abahaded          #+#    #+#             */
/*   Updated: 2024/11/02 21:34:46 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:21:31 by abahaded          #+#    #+#             */
/*   Updated: 2024/11/02 21:33:52 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcat(char *dest, char const *src)
{
	int	i;
	int	o;

	i = 0;
	o = 0;
	while (dest[i])
		i++;
	while (src[o])
		dest[i++] = src[o++];
	dest[i] = '\0';
	return (dest);
}

static char	*ft_strncat(char *dest, char const *src, size_t nb)
{
	int		i;
	size_t	o;

	i = 0;
	o = 0;
	while (dest[i])
		i++;
	while (src[o] && o < nb)
		dest[i++] = src[o++];
	dest[i] = '\0';
	return (dest);
}

size_t	ft_strlcat(char *dest, char const *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	max;
	size_t	sub;
	size_t	i;

	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	i = 0;
	len_dest = ft_strlen(dest);
	max = len_dest + len_src + 1;
	sub = size - len_dest - 1;
	if (size < len_dest)
		return (size + len_src);
	else if (size >= max)
		ft_strcat(dest, src);
	else if (len_dest < size && size <= max)
		ft_strncat(dest, src, sub);
	return (len_dest + len_src);
}
