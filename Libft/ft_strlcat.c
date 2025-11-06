/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <cvillene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 06:34:45 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/06 06:47:00 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	i;

	dst_len = 0;
	while (dst_len < size && dst[dst_len])
		dst_len++;
	i = 0;
	while (dst_len + i < size - 1 && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dst_len + i < size - 1)
		dst[dst_len + i] = src[i];
	return (dst_len + ft_strlen((char *)src));
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char str[10] = "hello";

	ft_strlcat(str, "non", 10);
	printf("%s\n", str);
	return (0);
}*/
