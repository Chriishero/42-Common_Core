/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:41:52 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/17 13:35:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*free_join(char *stash, char **buffer)
{
	char	*tmp;

	tmp = ft_strjoin(stash, *buffer);
	free(stash);
	stash = tmp;
	free(*buffer);
	if (!stash)
		return (NULL);
	return (stash);
}

char	*read_file(int fd)
{
	char	*buf;
	int		nbytes_read;

	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	nbytes_read = read(fd, buf, BUFFER_SIZE);
	if (nbytes_read == -1)
		return (free(buf), NULL);
	buf[nbytes_read] = '\0';
	return (buf);
}

char	*get_line(char *stash)
{
	char	*line;
	int		i;

	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	line = (char *)malloc((i + 2) * sizeof(char));
	if (!line)
		return (NULL);
	i = -1;
	while (stash[++i] && stash[i] != '\n')
		line[i] = stash[i];
	if (stash[i] == '\n')
	{
		line[i] = stash[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*buf;
	char		*tmp;
	char		*line;

	if (fd <= 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!stash)
		stash = ft_strdup("");
	while (!ft_strchr(stash, '\n'))
	{
		buf = read_file(fd);
		if (!buf)
			return (free(stash), stash = NULL, NULL);
		if (ft_strlen(buf) == 0)
		{
			free(buf);
			break ;
		}
		stash = free_join(stash, &buf);
		if (!stash)
			return (NULL);
	}
	if (!stash || stash[0] == '\0')
		return (free(stash), stash = NULL, NULL);
	line = get_line(stash);
	if (!line)
		return (NULL);
	tmp = ft_substr(stash, ft_strlen(line), ft_strlen(stash));
	return (free(stash), stash = tmp, line);
}
