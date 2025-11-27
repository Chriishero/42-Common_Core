/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <cvillene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 08:18:07 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/20 05:35:28 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_UTILS_H
# define FT_PRINTF_UTILS_H
# include <limits.h>
# include "Libft/libft.h"

char	*ft_reversestr(char *s);
char	*ft_dectohex_unsigned(unsigned long n, int islower);
char	*ft_dectohex_signed(long long n, int islower);
int		ft_nbrlen_unsigned(unsigned long n);
int		ft_nbrlen_signed(long long n);
char	*ft_ltoa(long n);

#endif