/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Vcorvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 17:01:18 by Vcorvill          #+#    #+#             */
/*   Updated: 2019/11/28 17:01:23 by Vcorvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *list;

	list = *alst;
	if (!list)
		*alst = new;
	else
	{
		while (list->next)
			list = list->next;
		list->next = new;
	}
}
