/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <cvillene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:27:17 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/05 10:59:41 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

#include <stdio.h>
void	ft_changeChar(unsigned int idx, char *c)
{
	if (idx % 2 == 0)
		*c -= 32;
}
int	main()
{
    char    *s = "hello world";
    ft_striteri(s, &ft_changeChar);
    printf("%s", s);
}