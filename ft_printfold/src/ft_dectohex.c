/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dectohex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <cvillene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 07:18:17 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/07 08:39:25 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_dectohex.h"

static char	*ft_reverse_str(char *s)
{
	int		i;
	int		j;
	char	result[8 * 16];
	char	*p;

	i = 0;
	while (s[i])
		i++;
	i--;
	j = 0;
	while (i >= 0)
	{
		result[j] = s[i];
		j++;
		i--;
	}
	result[j] = '\0';
	p = result;
	return (p);
}

char	*ft_dectohex(int n, int islower)
{
	char	*hex_array;
	char	result[8 * 16];
	int		i;
	char	*p;

	if (islower == 1)
		hex_array = "0123456789abcdef";
	else
		hex_array = "0123456789ABCDEF";
	i = 0;
	while (n > 0)
	{
		result[i++] = hex_array[n % 16];
		n /= 16;
	}
	result[i] = '\0';
	p = result;
	return (ft_reverse_str(p));
}
