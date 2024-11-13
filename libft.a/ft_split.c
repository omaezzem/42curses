/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:06:32 by omaezzem          #+#    #+#             */
/*   Updated: 2024/11/12 20:46:59 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_str(char *str, char c)
{
	int	i;
	int	len;
	int	isword;

	i = 0;
	len = 0;
	isword = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			isword = 0;
		}
		else if (isword == 0)
		{
			isword = 1;
			len++;
		}
		i++;
	}
	return (len);
}

static size_t	str_length(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**freememory(char **s, int i)
{
	int	index;

	index = 0;
	while (index < i)
	{
		free(s[index]);
		index++;
	}
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	len;
	size_t	index;
	char	**split;

	if (!s)
		return (NULL);
	len = count_str((char *)s, c);
	index = 0;
	split = (char **) malloc((sizeof(char *)) * (len + 1));
	if (!split)
		return (NULL);
	while (index < len)
	{
		while (*s == c)
			s++;
		split[index] = (char *)malloc((sizeof(char) * (str_length(s, c) + 1)));
		if (!split[index])
			return (freememory(split, index));
		ft_strlcpy(split[index], s, str_length(s, c) + 1);
		s = s + str_length(s, c);
		index++;
	}
	split[index] = NULL;
	return (split);
}
