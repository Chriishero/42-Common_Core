/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <cvillene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 08:59:11 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/06 06:42:33 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*buf1;
	unsigned char	*buf2;
	size_t			i;

	buf1 = (unsigned char *)s1;
	buf2 = (unsigned char *)s2;
	i = 0;
	while ((buf1[i] || buf2[i]) && i < n)
	{
		if (buf1[i] != buf2[i])
			return (buf1[i] - buf2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	char data1[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };
	char data2[] = { 10, 20, 32, 40, 54, 60, 70, 80, 90 };

       	printf("%d", ft_memcmp(data1, data2, 3));
	return (0);
}*/
