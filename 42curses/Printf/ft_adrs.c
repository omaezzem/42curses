/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adrs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 10:31:02 by omaezzem          #+#    #+#             */
/*   Updated: 2024/11/22 10:31:02 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int ft_strlen (char *str)
{
    int i;
    i = 0;
    while (str[i])
        i++;
    return i;
}

int ft_adrs(unsigned long dec)
{
    char *string;
    int length;
    int i;

    string = ft_hex(dec);
    if (!string)
        return -1;
    write(1, "0x", 2);
    length = ft_strlen(string);
    i = 0;
    while (string[i])
    {
        write(1, &string[i], 1);
        i++;
    }
    free(string);
    return length + 2;
}
