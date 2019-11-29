/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Vcorvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 17:07:03 by vcorvill          #+#    #+#             */
/*   Updated: 2019/11/29 10:19:17 by Vcorvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest;
	size_t	ori;
	size_t	l;

	ori = ft_strlen(src);
	dest = ft_strlen(dst);
	if (dstsize == 0)
		return (ori);
	if (dstsize < dest)
		return (ori += dstsize);
	else
		ori += dest;
	l = 0;
	while (dest < dstsize - 1 && src[l] != '\0')
	{
		dst[dest] = src[l];
		dest++;
		l++;
	}
	dst[dest] = '\0';
	return (ori);
}
