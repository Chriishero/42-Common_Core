/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkargs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <cvillene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:00:14 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/13 17:35:06 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_checkargs.h"
#include <stdio.h>

int	ft_checkconversion(const char *format)
{
	char	c;
	int		i;

	i = 0;
	while (format[++i])
	{
		if (format[i] == '%' && format[i - 1] != '%')
		{
			c = format[i + 1];
			if (c != 'c' && c != 's' && c != 'p' && c != 'd'
				&& c != 'i' && c != 'u' && c != 'x' && c != 'X' && c != '%')
				return (-1);
		}
	}
	return (0);
}
