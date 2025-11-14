/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <cvillene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:41:52 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/14 11:03:04 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*buf;
	char		*line;
	int			i;
	int			nbytes_read;

	buf = (char *)malloc(sizeof(char) * BUFFER_SIZE);
	if (!buf)
		return (NULL);
	nbytes_read = read(fd, buf, BUFFER_SIZE);
	line = (char *)malloc(sizeof(char) * BUFFER_SIZE);
	if (!line)
		return (NULL);
	i = 0;
	while (buf[i] != '\n' && i < nbytes_read)
	{
		line[i] = buf[i];
		i++;
	}
	line[i] = buf[i];
	line[++i] = '\0';
	return (line);
}