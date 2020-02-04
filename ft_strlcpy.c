/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:45:02 by imartin-          #+#    #+#             */
/*   Updated: 2019/12/04 19:32:21 by imartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t c;
	size_t i;

	c = 0;
	i = 0;
	if (!src)
		return (0);
	while (src[i] != 0)
		++i;
	if (dstsize == 0)
		return (i);
	while (src[c] != 0 && c + 1 < dstsize)
	{
		dst[c] = src[c];
		++c;
	}
	dst[c] = 0;
	return (i);
}
