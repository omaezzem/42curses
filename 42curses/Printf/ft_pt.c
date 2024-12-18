/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pt.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 10:31:34 by omaezzem          #+#    #+#             */
/*   Updated: 2024/11/22 10:31:34 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int  ft_check(char c, va_list list)
{
    int cnt;

    cnt = 0;
    if (c == 'c')
        cnt += ft_putchar(va_arg(list, int));
    else if (c == 's')
        cnt += ft_putstr(va_arg(list,char *));
    else if (c == 'd' || c == 'i')
        cnt += ft_putnbr(va_arg(list, int));
    else if (c == 'u')
        cnt += ft_unsigned_putnbr(va_arg(list,unsigned int));
    else if (c == 'x' || c == 'X')
        cnt += ft_decitohex(va_arg(list, unsigned int));
    else if (c == 'p')
        cnt += ft_adrs(va_arg(list, unsigned long));
    else if (c == '%')
        cnt += ft_putchar('%');
    return cnt;
}
int ft_printf(const char *format, ...)
{
    int c;
    va_list list;
    int count;

    if (write(1,0,0) == -1)
        return (-1);
    va_start(list,format);
    c = 0;
    count = 0;
    while (format[c])
    {
        if (format[c] != '%')
            write (1, &format[c], 1);
        if (format[c] == '%')
        {
            c++;
            count += ft_check(format[c], list);
        }
        c++;
    }
    return count;
    va_end(list);
}
