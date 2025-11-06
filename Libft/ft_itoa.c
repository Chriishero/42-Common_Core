/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <cvillene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 09:17:42 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/06 06:42:41 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n > 0 || n * -1 > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*value;
	int		n_len;

	n_len = ft_nbrlen(n) - 1;
	value = (char *)malloc((n_len + 1) * sizeof(char));
	if (!value)
		return (NULL);
	if (n == 0)
		value[0] = '0';
	if (n < 0)
	{
		value[0] = '-';
		n *= -1;
	}
	while (n_len >= 0 && n > 0)
	{
		value[n_len] = n % 10 + '0';
		n /= 10;
		n_len--;
	}
	return (value);
}
/*
#include <stdio.h>
int	main()
{
	printf("%s", ft_itoa(0));
	return (0);
}*/
