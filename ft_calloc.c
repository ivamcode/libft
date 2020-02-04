/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 19:45:41 by imartin-          #+#    #+#             */
/*   Updated: 2019/11/29 15:16:48 by imartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	c;
	char	*ptr;

	c = 0;
	ptr = malloc(count * size);
	if (ptr == 0)
		return (0);
	while (c < count * size)
	{
		ptr[c] = 0;
		++c;
	}
	return (ptr);
}
