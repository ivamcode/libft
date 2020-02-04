/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imartin- <imartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 11:37:10 by imartin-          #+#    #+#             */
/*   Updated: 2019/12/17 18:14:28 by imartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux_lst;

	while (*lst)
	{
		aux_lst = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = aux_lst;
	}
	*lst = 0;
}
