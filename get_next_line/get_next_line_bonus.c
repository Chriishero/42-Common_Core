/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <cvillene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:41:52 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/21 09:27:48 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static char	*extract_line(char *res)
{
	char	*line;
	int		i;

	i = 0;
	while (res[i] && res[i] != '\n')
		i++;
	line = (char *)malloc((i + 2) * sizeof(char));
	if (!line)
		return (NULL);
	i = -1;
	while (res[++i] && res[i] != '\n')
		line[i] = res[i];
	if (res[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

static char	*read_file(int fd, char *res)
{
	char	*buffer;
	int		nbytes;
	char	*tmp;

	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	while (!ft_strchr(res, '\n'))
	{
		nbytes = read(fd, buffer, BUFFER_SIZE);
		if (nbytes == -1)
			return (free(buffer), NULL);
		if (nbytes == 0)
			break ;
		buffer[nbytes] = '\0';
		tmp = ft_strjoin(res, buffer);
		free(res);
		res = tmp;
		if (!res)
			return (free(res), free(buffer), NULL);
	}
	free(buffer);
	if (!res || (res)[0] == '\0')
		return (NULL);
	return (res);
}

char	*get_next_line(int fd)
{
	static char	*res[1024];
	char		*line;
	char		*tmp;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	tmp = read_file(fd, res[fd]);
	res[fd] = tmp;
	if (!tmp)
		return (NULL);
	line = extract_line(res[fd]);
	if (!line)
		return (NULL);
	tmp = ft_substr(res[fd], ft_strlen(line), ft_strlen(res[fd]));
	free(res[fd]);
	res[fd] = tmp;
	return (line);
}
