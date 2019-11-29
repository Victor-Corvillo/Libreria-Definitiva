/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Vcorvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:14:02 by vcorvill          #+#    #+#             */
/*   Updated: 2019/11/29 10:40:08 by Vcorvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, unsigned len)
{
	unsigned char *p;

	p = (unsigned char *)b;
	while (len > 0)
	{
		*(p++) = c;
		len--;
	}
	return (b);
}