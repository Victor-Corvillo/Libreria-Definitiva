/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Vcorvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 17:02:31 by Vcorvill          #+#    #+#             */
/*   Updated: 2019/11/28 17:02:33 by Vcorvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*new;
	t_list		*list;

	if (!lst)
		return (NULL);
	list = ft_lstnew(f(lst->content));
	new = list;
	while (lst->next)
	{
		lst = lst->next;
		if (!(list->next = ft_lstnew(f(lst->content))))
		{
			del(list->next);
			free(list->next);
			return (NULL);
		}
		list = list->next;
	}
	return (new);
}
