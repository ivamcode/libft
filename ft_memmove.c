/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 15:52:33 by imartin-          #+#    #+#             */
/*   Updated: 2019/12/04 19:35:23 by imartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*aux_dst;
	const unsigned char	*aux_src;

	if (!dst && !src)
		return (0);
	aux_dst = dst;
	aux_src = src;
	i = 1;
	if (aux_src < aux_dst)
		while (i <= len)
		{
			aux_dst[len - i] = aux_src[len - i];
			++i;
		}
	else
		while (0 < len)
		{
			*aux_dst = *aux_src;
			++aux_dst;
			++aux_src;
			--len;
		}
	return (dst);
}
