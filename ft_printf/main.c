/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <cvillene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 07:59:51 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/14 10:32:33 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	main()
{
	int	i = 0;
	int n = INT_MIN + 4;
	printf("%d\n", ft_printf("%p et %p puis un %u et %X\n", (void *)0, &i, n, INT_MIN + 456789));
	printf("%d\n", printf("%p et %p puis un %u et %X\n", (void *)0, &i, n, INT_MIN + 456789));
	printf("\n");

	printf("%d\n", ft_printf("This is some serious testing...\n%c %d %i %p %% %s %u %x %X\nDid you survived it?\n", 42, 42, 42, (void *)42, "42", 42, 42, 42));
	printf("%d\n", printf("This is some serious testing...\n%c %d %i %p %% %s %u %x %X\nDid you survived it?\n", 42, 42, 42, (void *)42, "42", 42, 42, 42));
	printf("\n");

	printf("%d\n", ft_printf("%p et %p\n", ULONG_MAX, -ULONG_MAX));
	printf("%d\n", printf("%p et %p\n", (void *)ULONG_MAX, (void *)-ULONG_MAX));
	return (0);
}