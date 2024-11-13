/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:51:28 by omaezzem          #+#    #+#             */
/*   Updated: 2024/11/13 10:27:21 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (len > (s_len - start))
		len = s_len - start;
	if (start >= s_len)
		return (ft_strdup(""));
	sub = (char *) malloc(len * sizeof(char) + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (len > 0)
	{
		sub[i] = s[start];
		i++;
		start++;
		len--;
	}
	sub[i] = '\0';
	return (sub);
}
