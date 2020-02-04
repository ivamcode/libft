/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 12:03:31 by imartin-          #+#    #+#             */
/*   Updated: 2019/11/29 15:08:19 by imartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*array;
	size_t	len_s;

	if (!s)
		return (0);
	array = malloc(len + 1);
	if (array == 0)
		return (0);
	i = 0;
	len_s = ft_strlen(s);
	while (s[start + i] != 0 && i < len && start < len_s)
	{
		array[i] = s[start + i];
		++i;
	}
	array[i] = 0;
	return (array);
}
