/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <cvillene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 06:02:53 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/13 17:23:04 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, format);
	if (ft_checkconversion(format) == -1)
		return (-1);
	va_end(args);
	va_start(args, format);
	i = -1;
	count = 0;
	while (format[++i])
	{
		if (format[i] == '%' && format[i - 1] != '%')
		{
			if (ft_printargs(&args, format[i + 1], &count) == -1)
				return (-1);
			i++;
			continue ;
		}
		write(1, &format[i], 1);
		count++;
	}
	va_end(args);
	return (count);
}
