/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <cvillene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 06:55:40 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/07 08:31:49 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_putcount.h"

int	ft_putchar_count(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}

int	ft_putstr_count(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_count(s[i], fd);
		i++;
	}
	return (i);
}
