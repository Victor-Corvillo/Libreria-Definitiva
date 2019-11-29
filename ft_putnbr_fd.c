/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Vcorvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 16:55:31 by vcorvill          #+#    #+#             */
/*   Updated: 2019/11/22 12:58:47 by Vcorvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int a;

	a = 0;
	if (n >= 0)
		a = n;
	if (n < 0)
	{
		a = n * -1;
		ft_putchar_fd('-', fd);
	}
	if (a >= 10)
	{
		ft_putnbr_fd(a / 10, fd);
	}
	ft_putchar_fd((a % 10) + '0', fd);
}
