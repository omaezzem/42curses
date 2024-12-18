/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:04:50 by omaezzem          #+#    #+#             */
/*   Updated: 2024/11/16 15:03:51 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;
	size_t			i;
	size_t			t;

	t = count * size;
	if (size && t / size != count)
		return (NULL);
	temp = malloc(t);
	if (!temp)
		return (NULL);
	i = 0;
	while (i < t)
	{
		temp[i] = 0;
		i++;
	}
	return (temp);
}
