/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printargs.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <cvillene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 07:42:39 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/20 05:36:24 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTARGS_H
# define FT_PRINTARGS_H
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