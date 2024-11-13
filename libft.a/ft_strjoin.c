/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:29:12 by omaezzem          #+#    #+#             */
/*   Updated: 2024/11/13 12:10:41 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concatenate;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	concatenate = malloc(len + 1);
	if (!concatenate)
		return (NULL);
	ft_strlcpy(concatenate, s1, len + 1);
	ft_strlcat(concatenate, s2, len + 1);
	return (concatenate);
}
