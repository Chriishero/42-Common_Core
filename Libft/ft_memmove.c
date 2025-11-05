/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 05:34:50 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/04 06:39:04 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strncpy(char *dest, char *src, size_t n)
{
	int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	*ft_memmove(void *dest, void *src, size_t n)
{
	char	*temp;
	char	*src_cpy;
	char	*p_dest;

	p_dest = dest;
	temp = src;
	ft_strncpy(src_cpy, temp, n);
	while (n-- > 0)
		*p_dest++ = *src_cpy++;
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char str[] = "abcdefghij";
	
	memcpy(str + 1, str, 3);
	printf("%s", str);
	return (0);
}*/
