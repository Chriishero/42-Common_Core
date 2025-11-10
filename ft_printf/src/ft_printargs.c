/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printargs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <cvillene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 06:16:32 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/07 13:26:22 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printargs.h"

int	ft_checkargs(const char *format)
{
	char	c;
	int		i;

	i = 0;
	while (format[++i])
	{
		if (format[i] == '%')
		{
			c = format[i + 1];
			if (c != 'c' && c != 's' && c != 'd' && c != 'd' && c != 'p'
				&& c != 'i' && c != 'u' && c != 'x' && c != 'X' && c != '%')
				return (-1);
		}
	}
	return (0);
}

int	ft_printargs(va_list *args, char c, int *count)
{
	if (c == 'c')
		*count += ft_putchar_count(va_arg(*args, int), 1);
	else if (c == 's')
		*count += ft_putstr_count(va_arg(*args, char *), 1);
	else if (c == 'p')
	{
		*count += ft_putstr_count("0x", 1);
		*count += ft_putstr_count(ft_dectohex(va_arg(*args, int), 1), 1);
	}
	else if (c == 'd')
		*count += ft_putstr_count(ft_itoa(va_arg(*args, int)), 1);
	else if (c == 'i')
		*count += ft_putstr_count(ft_itoa(va_arg(*args, int)), 1);
	else if (c == 'u')
		*count += ft_putstr_count(ft_itoa(va_arg(*args, unsigned int)), 1);
	else if (c == 'x')
		*count += ft_putstr_count(ft_dectohex(va_arg(*args, int), 1), 1);
	else if (c == 'X')
		*count += ft_putstr_count(ft_dectohex(va_arg(*args, int), 0), 1);
	else if (c == '%')
		*count += ft_putchar_count('%', 1);
	else
		return (-1);
	return (0);
}
