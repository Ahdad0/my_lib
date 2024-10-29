/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:25:37 by abahaded          #+#    #+#             */
/*   Updated: 2024/10/29 13:54:17 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l;

	l = ft_strlen(little);
	i = 0;
	if (*little == '\0')
		return ((char  *)big);
	while (big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] && big[i + j])
			j++;
		if (j >= l && i + j <= len)
				return ((char *)big + i);
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
int main()
{
	char *p = ft_strnstr("abcdefgh", "abc", 3);
	printf("%s\n" ,p);
}*/
