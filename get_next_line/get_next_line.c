/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:41:52 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/17 10:07:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_file(int fd)
{
	char	*buf;
	int		nbytes_read;

	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	nbytes_read = read(fd, buf, BUFFER_SIZE);
	if (nbytes_read == -1)
	{
		free(buf);
		return (NULL);
	}
	buf[nbytes_read] = '\0';
	return (buf);
}

char	*get_line(char *stash)
{
	char	*line;
	int		i;

	line = (char *)malloc((ft_strlen(stash) + 1) * sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (*stash != '\n')
		line[i++] = *stash++;
	line[i++] = *stash++;
	line[i] = '\0';
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*buf;
	char		*tmp;
	char		*line;

	stash = NULL;
	while (!ft_strchr(stash, '\n'))
	{
		tmp = stash;
		buf = read_file(fd);
		if (ft_strlen(buf) == 0)
			return (NULL);
		stash = ft_strjoin(tmp, buf);
		if (!stash)
			return (NULL);
		free(buf);
	}
	line = get_line(stash);
	free(stash);
	return (line);
}