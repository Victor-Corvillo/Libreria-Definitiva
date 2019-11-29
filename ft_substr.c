/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Vcorvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 10:53:02 by vcorvill          #+#    #+#             */
/*   Updated: 2019/11/29 11:26:28 by Vcorvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	cont;
	size_t	i;
	size_t	slen;

	cont = 0;
	i = start;
	str = (char*)malloc(len + 1);
	if (!s)
		return (NULL);
	if (!str)
		return (NULL);
	slen = ft_strlen(s);
	if (slen < start)
	{
		str[cont] = '\0';
		return (str);
	}
	while (i < len + start)
		str[cont++] = s[i++];
	str[cont] = '\0';
	return (str);
}
