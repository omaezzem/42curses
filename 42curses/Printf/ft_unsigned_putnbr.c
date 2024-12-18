/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_putnbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 10:32:03 by omaezzem          #+#    #+#             */
/*   Updated: 2024/11/22 10:32:03 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_u_nblen(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		len++;
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

int	ft_unsigned_putnbr(unsigned int n)
{
	int len_u_nb;
	len_u_nb = ft_u_nblen(n);
	if (n > 9)
	{
		ft_unsigned_putnbr (n / 10);
		ft_unsigned_putnbr (n % 10);
	}
	else
	{
		ft_putchar (n + 48);
	}
	return len_u_nb;
}