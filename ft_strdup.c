/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Vcorvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 13:28:42 by vcorvill          #+#    #+#             */
/*   Updated: 2019/11/29 11:17:39 by Vcorvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	x;
	size_t	l;

	x = ft_strlen(s1);
	l = 0;
	dup = (char*)malloc(sizeof(char) * (x + 1));
	if (dup == 0)
		return (NULL);
	while (s1[l] != '\0')
	{
		dup[l] = s1[l];
		l++;
	}
	dup[l] = '\0';
	return ((char*)dup);
}
