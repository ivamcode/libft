/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:49:02 by imartin-          #+#    #+#             */
/*   Updated: 2019/12/04 19:36:40 by imartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*aux_dst;
	const unsigned char	*aux_src;

	aux_dst = dst;
	aux_src = src;
	while (n > 0)
	{
		if (*aux_src == (unsigned char)c)
		{
			*aux_dst = *aux_src;
			return (aux_dst + 1);
		}
		*aux_dst = *aux_src;
		++aux_src;
		++aux_dst;
		--n;
	}
	return (0);
}
