/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:02:23 by omaezzem          #+#    #+#             */
/*   Updated: 2024/11/12 10:49:04 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *str, size_t n)
{
	unsigned char	*zero;
	size_t			i;

	zero = str;
	i = 0;
	while (n--)
	{
		zero[i] = '\0';
		i++;
	}
	return (zero);
}
