/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <cvillene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 08:19:25 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/14 10:37:27 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_utils.h"

char	*ft_reversestr(char *s)
{
	char	*result;
	int		i;
	int		j;

	result = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i + 1])
		i++;
	j = 0;
	while (i >= 0)
		result[j++] = s[i--];
	result[j] = '\0';
	free(s);
	return (result);
}

char	*ft_dectohex(unsigned long n, int islower)
{
	char	*result;
	char	*hex_array;
	int		i;

	result = (char *)malloc(ft_nbrlen(n) + 1);
	if (!result)
		return (NULL);
	if (islower == 1)
		hex_array = "0123456789abcdef";
	else
		hex_array = "0123456789ABCDEF";
	i = 0;
	if (n == 0)
		result[i++] = '0';
	while (n != 0)
	{
		if (n % 16 < 0)
			result[i++] = hex_array[n % 16 * -1];
		else
			result[i++] = hex_array[n % 16];
		n /= 16;
	}
	result[i] = '\0';
	return (ft_reversestr(&result[0]));
}

int	ft_nbrlen(unsigned long n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_ltoa(long n)
{
	int		nbr_len;
	char	*value;

	nbr_len = ft_nbrlen(n);
	value = (char *)malloc(sizeof(char) * (nbr_len + 1));
	if (!value)
		return (NULL);
	value[nbr_len--] = '\0';
	if (n == 0)
		value[nbr_len--] = '0';
	while (n != 0)
	{
		if (n % 10 >= 0)
			value[nbr_len--] = n % 10 + '0';
		else
			value[nbr_len--] = n % 10 * -1 + '0';
		n /= 10;
	}
	if (nbr_len == 0)
		value[nbr_len] = '-';
	return (value);
}
