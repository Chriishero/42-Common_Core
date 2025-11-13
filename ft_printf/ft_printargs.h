/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printargs.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <cvillene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 08:30:29 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/13 16:00:05 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTARGS_H
# define FT_PRINTARGS_H
# include <stdarg.h>
# include "../Libft/libft.h"
# include "ft_putcount.h"
# include "ft_dectohex.h"
# include "ft_checkargs.h"

int	ft_printargs(va_list *args, char c, int *count);

#endif