/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:26:13 by abahaded          #+#    #+#             */
/*   Updated: 2024/10/30 10:20:44 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_l(int nb)
{
	int		i;
	long	n;

	i = 0;
	n = nb;
	if (n < 0)
		n = -n;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static char	*ft_negative(char *temp, int nb)
{
	char	*p;
	int		i;
	int		j;
	long	n;

	j = 0;
	i = 0;
	n = nb;
	p = malloc(ft_l(n) + 2);
	if (!p)
		return (NULL);
	n = -n;
	p[i++] = '-';
	while (n != 0)
	{
		temp[j++] = n % 10 + '0';
		n /= 10;
	}
	j--;
	while (j >= 0)
		p[i++] = temp[j--];
	p[i] = '\0';
	return (p);
}

static char	*ft_positive(char *temp, int n)
{
	char	*p;
	int		i;
	int		j;

	j = 0;
	i = 0;
	p = malloc(ft_l(n) + 1);
	if (!p)
		return (NULL);
	while (n != 0)
	{
		temp[j++] = n % 10 + '0';
		n /= 10;
	}
	j--;
	while (j >= 0)
		p[i++] = temp[j--];
	p[i] = '\0';
	return (p);
}

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	char	*ptr;
	char	temp[1024];

	i = 0;
	j = 0;
	if (n <= -1)
		return (ft_negative(temp, n));
	else if (n != 0)
		return (ft_positive(temp, n));
	ptr = malloc(2);
	if (!ptr)
		return (NULL);
	if (n == 0)
	{
		ptr[0] = '0';
		ptr[1] = '\0';
	}
	return (ptr);
}
