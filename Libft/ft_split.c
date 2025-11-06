/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <cvillene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 06:25:42 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/06 06:53:53 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countword(const char *s, char delimiter)
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

static char	*ft_getword(const char **s, char delimiter, int *size)
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

	if (s == NULL)
		return (NULL);
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
			split_array[j++] = temp;
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
    char    *s = "hello woorld ?!?!?!";
    char    c = 'o';
	char	**split = ft_split(s, c);

	for (int i = 0; split != NULL && split[i]; i++)
		printf("%s\n", split[i]);
	free(split);
	return (0);
}*/
