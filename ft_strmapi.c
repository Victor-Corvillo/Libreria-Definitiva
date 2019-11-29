/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Vcorvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 10:55:55 by vcorvill          #+#    #+#             */
/*   Updated: 2019/11/25 12:32:49 by Vcorvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*r;
	unsigned int	l;
	unsigned int	i;

	if (!s)
		return (0);
	l = (unsigned)ft_strlen(s);
	if (!(r = (char *)malloc(l + 1)))
		return (NULL);
	i = 0;
	while (i < l)
	{
		r[i] = f(i, s[i]);
		i++;
	}
	r[i] = '\0';
	return (r);
}
