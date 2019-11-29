/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Vcorvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:30:13 by Vcorvill          #+#    #+#             */
/*   Updated: 2019/11/29 10:41:57 by Vcorvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned		char	*d;
	const unsigned	char	*s;
	size_t					x;

	x = 0;
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	while (x < n)
	{
		d[x] = s[x];
		if (s[x] == (unsigned char)c)
			return (dst + x + 1);
		x++;
	}
	return (NULL);
}
