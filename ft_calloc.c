/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Vcorvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 13:20:25 by vcorvill          #+#    #+#             */
/*   Updated: 2019/11/22 13:00:42 by Vcorvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *a;

	a = (malloc(count * size));
	if (a == 0)
		return (NULL);
	ft_bzero(a, (count * size));
	return (a);
}
