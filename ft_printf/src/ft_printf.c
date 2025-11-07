/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <cvillene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 06:02:53 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/07 10:00:57 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (ft_printargs(&args, format[i + 1], &count) == -1)
				return (-1);
			i += 2;
			continue ;
		}
		write(1, &format[i], 1);
		count++;
		i++;
	}
	va_end(args);
	return (count);
}
