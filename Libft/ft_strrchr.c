/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 08:16:16 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/04 08:34:12 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*buf;
	int		i;

	buf = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			buf = (char *)&s[i];
		i++;
	}
	return (buf);
}
/*
#include <stdio.h>
int	main()
{
	char	*str = "bondour";
	printf("%s", ft_strrchr(str, 'i'));
}*/
