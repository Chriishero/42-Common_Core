/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 06:25:42 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/05 07:08:49 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_countword(const char *s, char delimiter)
{
	int	i;
	int	count;
	int	isword;

	i = 0;
	count = 0;
	isword = 0;
	while (s[i])
	{
		if (s[i] == delimiter && isword == 0)
			isword = 1;
		else if (s[i] != delimiter && isword == 1)
		{
			count++;
			isword = 0;
		}
		i++;
	}
	if (isword == 0)
		count++;
	return (count);
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strcpy(char *dst, const char *src)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (src[i])
		i++;
	j = 0;
	while (src[j])
	{
		*dst++ = src[j];
		j++;
	}
	*dst = '\0';
	return (i);
}

char	*ft_getword(const char **s, char delimiter, int *size)
{
	char	*temp;
	int		i;
	int		j;

	temp = (char *)malloc((*size + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	i = 0;
	j = 0;
	while (i < *size)
	{
		if ((*s)[i] != delimiter)
		{
			temp[j] = (*s)[i];
			j++;
		}
		i++;
	}
	temp[j] = '\0';
	*s += *size + 1;
	*size = 0;
	return (temp);
}

char	**ft_split(char const *s, char c)
{
	char	**split_array;
	int		count_word;
	int		i;
	int		j;
	char	*temp;

	count_word = ft_countword(s, c);
	split_array = (char **)malloc((count_word + 1) * sizeof(char *));
	if (!split_array)
		return (NULL);
	i = 0;
	j = 0;
	while (j < count_word)
	{
		if (s[i] == c || s[i] == '\0')
		{
			temp = ft_getword(&s, c, &i);
			split_array[j] = temp;
			j++;
		}
		i++;
	}
	split_array[j] = NULL;
	return (split_array);
}
/*
#include <stdio.h>
int	main()
{
	char	**split = ft_split("hello woorld ?!?!", 'o');
	for (int i = 0; split[i]; i++)
		printf("%s\n", split[i]);
	free(split);
	return (0);
}*/
