/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcount.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <cvillene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 06:57:06 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/07 08:39:50 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUTCOUNT_H
# define FT_PUTCOUNT_H
# include <unistd.h>

int	ft_putchar_count(char c, int fd);
int	ft_putstr_count(char *s, int fd);

#endif