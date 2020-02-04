/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imartin- <imartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 16:22:54 by imartin-          #+#    #+#             */
/*   Updated: 2019/12/18 17:24:16 by imartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *aux_lst;

	aux_lst = *lst;
	if (!(*lst))
		*lst = new;
	else
	{
		while (aux_lst->next != 0)
			aux_lst = aux_lst->next;
		aux_lst->next = new;
	}
}
