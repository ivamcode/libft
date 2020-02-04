/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:07:52 by imartin-          #+#    #+#             */
/*   Updated: 2019/12/04 19:35:43 by imartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*aux_dst;
	const unsigned char	*aux_src;

	if (!dst && !src)
		return (0);
	i = 0;
	aux_dst = dst;
	aux_src = src;
	while (i < n)
	{
		*aux_dst = *aux_src;
		++aux_dst;
		++aux_src;
		++i;
	}
	return (dst);
}
