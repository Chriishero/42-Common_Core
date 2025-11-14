/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <cvillene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 08:18:07 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/14 10:37:32 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_UTILS_H
# define FT_PRINTF_UTILS_H
# include <limits.h>
# include <stdio.h>
# include "Libft/libft.h"

char	*ft_reversestr(char *s);
char	*ft_dectohex(unsigned long n, int islower);
int		ft_nbrlen(unsigned long n);
char	*ft_ltoa(long n);

#endif