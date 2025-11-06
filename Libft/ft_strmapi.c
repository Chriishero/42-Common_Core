/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <cvillene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:10:58 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/06 06:48:18 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	int		i;

	new_str = (char *)malloc((ft_strlen((char *)s) + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_str[i] = (*f)(i, s[i]);
		i++;
	}
	return (new_str);
}
/*
#include <stdio.h>
char    ft_changeChar(unsigned int idx, char c)
{
    if (idx % 2 == 0)
        return (c - 32);
    return (c);
}
int main()
{
    printf("%s", ft_strmapi("hello world", &ft_changeChar));
}*/