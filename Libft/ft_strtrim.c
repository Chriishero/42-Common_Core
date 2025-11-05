/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 05:58:38 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/05 06:24:19 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_trimedstrlen(const char *s1, const char *set)
{
	int	final_len;
	int	i;
	int	j;

	final_len = 0;
	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s1[i] != set[j] && set[j])
			j++;
		if (s1[i] == set[j] && set[j])
			final_len--;
		else
			final_len++;
		i++;
	}
	return (final_len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*trimed_str;
	int		k;

	trimed_str = (char *)malloc((ft_trimedstrlen(s1, set) + 1) * sizeof(char));
	if (!trimed_str)
		return (NULL);
	i = 0;
	k = 0;
	while (s1[i])
	{
		j = 0;
		while (s1[i] != set[j] && set[j])
			j++;
		if (!set[j])
		{
			trimed_str[k] = s1[i];
			k++;
		}
		i++;
	}
	trimed_str[k] = '\0';
	return (trimed_str);
}
/*
#include <stdio.h>
int	main()
{
	printf("%s", ft_strtrim("hello world  !!?!", "eo ?"));
	return (0);
}*/
