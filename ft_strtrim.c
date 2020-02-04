/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imartin- <imartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 11:57:53 by imartin-          #+#    #+#             */
/*   Updated: 2019/12/17 17:40:15 by imartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*array;
	int		i;
	int		len;

	if (!s1)
		return (0);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		++i;
	len = ft_strlen(s1) - 1;
	while (len > i && ft_strchr(set, s1[len]))
		--len;
	array = ft_substr(s1, i, len - i + 1);
	return (array);
}
