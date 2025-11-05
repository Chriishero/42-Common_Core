/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 09:06:30 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/04 09:38:23 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (ft_strlen(little) == 0)
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i] && little[j] && i < len)
		{
			if (big[i] != little[j])
				break ;
			i++;
			j++;
		}
		if (!little[j])
			return ((char *)&big[i - j]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main()
{
	printf("%s", ft_strnstr("aaaaaa", "", 20));
	return (0);
}*/
