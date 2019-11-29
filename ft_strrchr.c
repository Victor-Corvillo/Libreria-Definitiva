/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Vcorvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 11:20:37 by vcorvill          #+#    #+#             */
/*   Updated: 2019/11/29 10:48:47 by Vcorvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *last_pos;

	last_pos = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			last_pos = s;
		s++;
	}
	if (last_pos)
		return ((char*)last_pos);
	if (c == '\0')
		return ((char*)s);
	return (NULL);
}
