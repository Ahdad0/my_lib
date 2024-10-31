/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:05:42 by abahaded          #+#    #+#             */
/*   Updated: 2024/10/31 16:29:12 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_print(char c, int fd)
{
	write(fd, &c, 1);
}

static void	ft_putnbr(int nb, int fd)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10, fd);
		ft_print('8', fd);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10, fd);
		ft_putnbr(nb % 10, fd);
	}
	else if (nb < 0)
	{
		ft_print('-', fd);
		ft_putnbr(-nb, fd);
	}
	else
	{
		ft_print(nb + '0', fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	ft_putnbr(n, fd);
}
