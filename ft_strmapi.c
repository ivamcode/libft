/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imartin- <imartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:17:17 by imartin-          #+#    #+#             */
/*   Updated: 2019/12/17 17:52:28 by imartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*array;
	unsigned int	i;

	if (!s || !f)
		return (0);
	array = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (array == 0)
		return (0);
	i = 0;
	while (s[i])
	{
		array[i] = f(i, s[i]);
		++i;
	}
	array[i] = 0;
	return (array);
}
