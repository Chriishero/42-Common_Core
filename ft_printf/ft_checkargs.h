/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkargs.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <cvillene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:59:24 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/13 17:37:27 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHECKARGS_H
# define FT_CHECKARGS_H
# include <stdarg.h>
# include <limits.h>
# include "../Libft/libft.h"

int	ft_checkchar(char c);
int	ft_checkstring(char *s);
int	ft_checkpointer(void *p);
int	ft_checkdecimal(int d);
int	ft_checkinterger(int i);
int	ft_checkunsigned(unsigned int u);
int	ft_checkargs(void *arg, char c);
int	ft_checkconversion(const char *format);

#endif