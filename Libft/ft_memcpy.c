/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:27:21 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/04 06:36:59 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	unsigned char	*ptr_d;
	unsigned char	*ptr_s;

	ptr_d = dest;
	ptr_s = src;
	while (n-- > 0)
		*ptr_d++ = *ptr_s++;
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char str[] = "abcdefg";
	
	ft_memcpy(str + 4, str, 3);
	printf("%s", str);
	return (0);
}*/
