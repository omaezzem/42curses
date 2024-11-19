/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:57:29 by omaezzem          #+#    #+#             */
/*   Updated: 2024/11/11 10:58:15 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nodedyali;

	nodedyali = malloc(sizeof(t_list));
	if (!nodedyali)
		return (NULL);
	nodedyali->content = content;
	nodedyali->next = NULL;
	return (nodedyali);
	return NULL;
}
