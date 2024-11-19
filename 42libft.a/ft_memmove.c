/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:25:08 by omaezzem          #+#    #+#             */
/*   Updated: 2024/11/17 10:40:13 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dt;
	unsigned const char	*sc;
	size_t				i;

	dt = (unsigned char *)dest;
	sc = (unsigned const char *)src;
	if (dt == sc || n == 0)
		return (dest);
	if (dt < sc)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		i = n;
		while (i > 0)
		{
			dt[i - 1] = sc[i - 1];
			i--;
		}
	}
	return (dest);
}
