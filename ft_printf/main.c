/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <cvillene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 08:43:02 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/07 13:26:10 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libftprintf.h"
#include <stdio.h>

int	main()
{
<<<<<<< HEAD
	ft_printf("Hello %X et %d et %s\n", 567899999, 890);
	//printf("Hello %X et %d et %s\n", 567899999, 890);
=======
	printf("%d\n", ft_printf("Hello %X et %d et %s\n", 521121, -2147483647, "sûrement"));
	printf("%d\n", printf("Hello %X et %d et %s\n", 521121, -2147483647, "sûrement"));
>>>>>>> 2089b7fbda30218df60985e26489648867c2a84e
	return (0);
}









































