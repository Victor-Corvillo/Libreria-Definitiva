/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Vcorvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 17:07:46 by vcorvill          #+#    #+#             */
/*   Updated: 2019/11/29 10:44:53 by Vcorvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t len_ori;
	size_t l;
	size_t q;

	if (src == 0)
		return (0);
	q = dstsize - 1;
	len_ori = ft_strlen(src);
	l = 0;
	if (dstsize == 0)
		return (len_ori);
	while (l < len_ori && l < q)
	{
		dst[l] = src[l];
		l++;
	}
	dst[l] = '\0';
	return (len_ori);
}
