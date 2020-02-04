/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 15:59:54 by imartin-          #+#    #+#             */
/*   Updated: 2019/12/04 19:36:22 by imartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*aux;

	i = 0;
	aux = s;
	while (i < n)
	{
		if (aux[i] == (unsigned char)c)
			return ((unsigned char *)(aux + i));
		++i;
	}
	return (0);
}
