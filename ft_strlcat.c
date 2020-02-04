/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 17:43:33 by imartin-          #+#    #+#             */
/*   Updated: 2019/12/04 19:32:38 by imartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t c;
	size_t i;
	size_t temp;

	c = 0;
	if (!dst && !src)
		return (0);
	c = ft_strlen(dst);
	temp = c;
	i = 0;
	if (c < dstsize)
	{
		while (src[i] != 0 && c + 1 < dstsize)
		{
			dst[c] = src[i];
			++i;
			++c;
		}
		dst[c] = 0;
	}
	i = ft_strlen(src);
	if (temp > dstsize)
		return (dstsize + i);
	else
		return (temp + i);
}
