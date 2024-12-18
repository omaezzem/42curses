/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decitohex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 10:31:14 by omaezzem          #+#    #+#             */
/*   Updated: 2024/11/22 10:31:14 by omaezzem         ###   ########.fr       */
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

int ft_decitohex(int dec)
{
    char *string;
    int lenght;
    int i;
    string = ft_hex(dec);
    lenght = ft_strlen(string);
    i = 0;
    while (string[i])
    {
        write (1, &string[i], 1);
        i++;
    }
    free (string);
    return lenght;
}
