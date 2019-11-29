/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Vcorvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 10:57:21 by Vcorvill          #+#    #+#             */
/*   Updated: 2019/11/29 11:14:53 by Vcorvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d == 0 && s == 0)
		return (0);
	if (d < s)
	{
		while (len-- > 0)
		{
			*(d++) = *(s++);
		}
		return (dst);
	}
	else
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	return (dst);
}
