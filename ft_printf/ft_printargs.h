/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printargs.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 07:42:39 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/18 14:05:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTARGS_H
# define FT_PRINTARGS_H
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>
# include "Libft/libft.h"
# include "ft_printf_utils.h"

int		ft_print_c(int c);
int		ft_print_s(char *s);
int		ft_print_p(unsigned long p);
int		ft_print_int(int n);
int		ft_print_u(unsigned int u);
int		ft_print_hex(unsigned int x, char c);
int		ft_printargs(va_list *args, char c);

#endif