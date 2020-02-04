/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:48:43 by imartin-          #+#    #+#             */
/*   Updated: 2019/12/04 19:33:19 by imartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t c;
	size_t i;

	c = 0;
	if (needle[0] == 0)
		return ((char *)haystack);
	while (haystack[c] != 0 && c < len)
	{
		i = 0;
		while (haystack[c + i] && haystack[c + i] == needle[i] && c + i < len)
		{
			if (needle[i + 1] == 0)
				return ((char *)(haystack + c));
			++i;
		}
		++c;
	}
	return (0);
}
