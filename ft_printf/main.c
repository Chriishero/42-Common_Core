/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <cvillene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 08:43:02 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/07 11:12:28 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libftprintf.h"
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_printf("Hello %X et %d et %s\n", 521121, -2147483647, "sûrement"));
	printf("%d\n", printf("Hello %X et %d et %s\n", 521121, -2147483647, "sûrement"));
	return (0);
}









































