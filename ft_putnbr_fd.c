/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:04:18 by imartin-          #+#    #+#             */
/*   Updated: 2019/12/11 11:12:03 by imartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int div;
	int mod;

	div = n;
	if (n == (-2147483648))
		write(fd, "-2147483648", 11);
	else
	{
		if (div < 0)
		{
			write(fd, "-", 1);
			div = div * (-1);
		}
		if (div > 9)
			ft_putnbr_fd(div / 10, fd);
		mod = div % 10 + 48;
		write(fd, &mod, 1);
	}
}
