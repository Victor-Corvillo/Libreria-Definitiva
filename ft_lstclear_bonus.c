/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Vcorvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 17:02:01 by Vcorvill          #+#    #+#             */
/*   Updated: 2019/11/28 17:02:03 by Vcorvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *list;
	t_list *temp;

	list = *lst;
	while (list)
	{
		temp = list;
		del(list->content);
		list = list->next;
		free(temp);
	}
	*lst = NULL;
}
