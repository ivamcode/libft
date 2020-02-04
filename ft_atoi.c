/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 13:36:31 by imartin-          #+#    #+#             */
/*   Updated: 2019/11/25 16:44:12 by imartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(const char *str)
{
	int c;

	c = 0;
	while (str[c] == 9 || str[c] == 32 || str[c] == '\n' || str[c] == '\v'\
			|| str[c] == '\f' || str[c] == '\r')
		++c;
	return (c);
}

int			ft_atoi(const char *str)
{
	int		c;
	long	numb;
	int		neg;

	c = 0;
	numb = 0;
	neg = 0;
	c = ft_isspace(str);
	if (str[c] == 43 || str[c] == 45)
	{
		if (str[c] == 45)
			neg = 1;
		++c;
	}
	while (48 <= str[c] && str[c] <= 57)
	{
		numb = numb * 10 + (str[c] - 48);
		++c;
	}
	return (neg ? numb * -1 : numb);
}
