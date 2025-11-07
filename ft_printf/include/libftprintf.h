/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <cvillene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 06:05:00 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/07 10:43:36 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "../Libft/libft.h"
# include "ft_printargs.h"
# include <stdio.h> // À SUPPRIMER FDSFSADF

int	ft_printf(const char *format, ...);

#endif