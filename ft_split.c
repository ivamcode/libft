/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 12:30:13 by imartin-          #+#    #+#             */
/*   Updated: 2019/12/03 16:05:16 by imartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_malloc_row(char const *s, char c, char *tab_row)
{
	int	c_letter;

	c_letter = 0;
	while (s[c_letter] && s[c_letter] != c)
		++c_letter;
	if (!(tab_row = malloc(sizeof(char) * (c_letter + 1))))
		return (0);
	return (tab_row);
}

static char	*ft_copy_row(char const *s, char c, char *tab_row)
{
	int	c_letter;

	c_letter = 0;
	while (s[c_letter] && s[c_letter] != c)
	{
		tab_row[c_letter] = s[c_letter];
		++c_letter;
	}
	tab_row[c_letter] = 0;
	return (tab_row);
}

static int	ft_size_tab(char const *s, char c)
{
	int	i;
	int	c_words;

	i = 0;
	c_words = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			++c_words;
		++i;
	}
	return (c_words);
}

char		**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		row;

	if (!s)
		return (0);
	row = 0;
	if (!(tab = malloc(sizeof(char *) * (ft_size_tab(s, c) + 1))))
		return (0);
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i - 1] == c || i == 0))
		{
			if (!(tab[row] = ft_malloc_row(s + i, c, tab[row])))
				return (0);
			tab[row] = ft_copy_row(s + i, c, tab[row]);
			++row;
		}
		++i;
	}
	tab[row] = 0;
	return (tab);
}
