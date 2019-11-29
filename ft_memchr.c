/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Vcorvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 12:08:16 by Vcorvill          #+#    #+#             */
/*   Updated: 2019/11/29 10:42:11 by Vcorvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *a;

	a = (unsigned char*)s;
	while (n > 0)
	{
		if (*a == (unsigned char)c)
			return (a);
		a++;
		n--;
	}
	return (NULL);
}
