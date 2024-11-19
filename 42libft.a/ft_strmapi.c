/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:41:10 by omaezzem          #+#    #+#             */
/*   Updated: 2024/11/18 21:42:38 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*mapi;

	if (!s || !f)
	{
		return (NULL);
	}
	len = ft_strlen((char *)s);
	mapi = (char *) malloc((len * sizeof(char)) + 1);
	if (!mapi)
	{
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		mapi[i] = f(i, s[i]);
		i++;
	}
	mapi[i] = '\0';
	return (mapi);
}
