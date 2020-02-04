/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 12:28:25 by imartin-          #+#    #+#             */
/*   Updated: 2019/12/04 19:32:48 by imartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*array;
	int		i;
	int		c;

	i = 0;
	c = 0;
	if (!s1 || !s2)
		return (0);
	array = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (array == 0)
		return (0);
	while (s1[i])
	{
		array[i] = s1[i];
		++i;
	}
	while (s2[c])
	{
		array[i] = s2[c];
		++i;
		++c;
	}
	array[i] = 0;
	return (array);
}
