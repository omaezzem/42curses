/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:22:40 by omaezzem          #+#    #+#             */
/*   Updated: 2024/11/12 16:22:33 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dt;
	unsigned char	*sc;

	if (dest == src)
		return (dest);
	dt = (unsigned char *)dest;
	sc = (unsigned char *)src;
	i = 0;
	while (n--)
	{
		dt[i] = sc[i];
		i++;
	}
	return (dt);
}
