/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imartin- <imartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 12:28:19 by imartin-          #+#    #+#             */
/*   Updated: 2019/12/17 17:56:50 by imartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *aux_new;

	if (!lst || !f)
		return (0);
	if (!(aux_new = malloc(sizeof(t_list))))
		return (0);
	new = aux_new;
	while (lst)
	{
		if (!new)
			new = malloc(sizeof(t_list));
		if (!new)
		{
			ft_lstclear(&aux_new, del);
			return (0);
		}
		new->content = f(lst->content);
		if (!(new->next = malloc(sizeof(t_list))))
			return (0);
		new = new->next;
		lst = lst->next;
	}
	return (aux_new);
}
