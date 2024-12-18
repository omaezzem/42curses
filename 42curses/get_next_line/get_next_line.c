/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 12:10:48 by omaezzem          #+#    #+#             */
/*   Updated: 2024/12/17 12:39:52 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	len_at_newline(char *line, int i)
{
	while (line[i] && line[i] != '\n')
		i++;
	return (i);
}

char	*read_line(int fd, char *line)
{
	char	*buffer;
	ssize_t	bytes_reads;

	buffer = malloc((size_t)BUFFER_SIZE + 1);
	if (!buffer)
	{
		free(buffer);
		// free(line);
		return (NULL);
	}
	bytes_reads = 1;
	while (!(ft_strchr(line, '\n')) && bytes_reads > 0)
	{
		bytes_reads = read(fd, buffer, BUFFER_SIZE);
		if (bytes_reads == -1)
		{
			free(buffer);
			free(line);
			return (NULL);
		}
		buffer[bytes_reads] = '\0';
		line = ft_strjoin(line, buffer);
	}
	free(buffer);
	return (line);
}

char	*ft_extract_line(char *line)
{
	int		i;
	char	*str;

	i = 0;
	if (!line[i])
		return (NULL);
	i = len_at_newline(line, 0);
	str = malloc (i + 1 + len_malloc(line, i));
	if (!str)
		return (NULL);
	i = 0;
	while (line[i] && line[i] != '\n')
	{
		str[i] = line[i];
		i++;
	}
	if (line[i] == '\n')
	{
		str[i] = line[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_newline(char *line)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	i = len_at_newline(line, 0);
	if (!line[i])
	{
		free(line);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(line) - i + 1));
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (line[i])
		str[j++] = line[i++];
	str[j] = '\0';
	free(line);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*line;
	char		*next_ln;

	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE > INT_MAX)
		return (NULL);
	line = read_line(fd, line);
	if (!line)
		return (NULL);
	next_ln = ft_extract_line(line);
	line = ft_newline(line);
	return (next_ln);
}
