/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 17:52:40 by imartin-          #+#    #+#             */
/*   Updated: 2019/12/04 19:31:16 by imartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *aux_s1;
	unsigned char *aux_s2;

	aux_s1 = (unsigned char *)s1;
	aux_s2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*aux_s1 == *aux_s2 && *aux_s1 && *aux_s2 && n - 1 > 0)
	{
		--n;
		++aux_s1;
		++aux_s2;
	}
	return (*aux_s1 - *aux_s2);
}
