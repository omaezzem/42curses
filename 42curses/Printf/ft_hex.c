/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 10:31:25 by omaezzem          #+#    #+#             */
/*   Updated: 2024/11/22 10:31:25 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int    ft_hex(unsigned int nb, char c)
{
    char    *x;
    char    *X;
    int     count;

    x = "0123456789abcdef";
    X = "0123456789ABCDEF";
    count = 0;
    if (c == 'x')
    {
        if (nb / 16)
            count += ft_hex((nb / 16), c);
        count += ft_putchar(x[nb % 16]);
    }
    else if (c == 'X')
    {
        if (nb / 16)
            count += ft_hex((nb / 16), c);
        count += ft_putchar(X[nb % 16]);
    }
    return (count);
}
