/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 19:04:12 by imartin-          #+#    #+#             */
/*   Updated: 2019/11/30 11:53:10 by imartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_int(int n)
{
	int	counter;

	counter = 0;
	if (n < 0)
	{
		++counter;
		n *= -1;
	}
	while (n > 9)
	{
		n = n / 10;
		++counter;
	}
	return (counter);
}

static char	*ft_check_itoa(char *array, int n, int co_numb)
{
	int		mod;
	char	*aux;

	if (n < 0)
	{
		array[0] = '-';
		n *= (-1);
	}
	aux = array;
	if (n > 9)
		ft_check_itoa(array, n / 10, co_numb - 1);
	mod = (n % 10) + 48;
	aux[co_numb] = mod;
	return (array);
}

char		*ft_itoa(int n)
{
	int		co_numb;
	char	*array;
	char	*neg_max;

	co_numb = ft_count_int(n);
	if (n == -2147483648)
	{
		neg_max = malloc(sizeof(char) * (12));
		if (neg_max == 0)
			return (0);
		ft_strlcpy(neg_max, "-2147483648", 12);
		return (neg_max);
	}
	else
	{
		array = malloc(sizeof(char) * (co_numb + 2));
		if (array == 0)
			return (0);
	}
	ft_check_itoa(array, n, co_numb);
	array[co_numb + 1] = 0;
	return (array);
}
