/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:51:28 by omaezzem          #+#    #+#             */
/*   Updated: 2024/11/18 21:47:19 by omaezzem         ###   ########.fr       */
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
// #include <stdio.h>

// int main()
// {
// 	char arr[] = "abcdef";
// 	unsigned int i = 1;
// 	size_t len = 3;

// 	char *dddd = ft_substr(arr, i, len);
// 	printf("%s\n", dddd);
// }