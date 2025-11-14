/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillene <cvillene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 08:12:04 by cvillene          #+#    #+#             */
/*   Updated: 2025/11/14 09:35:37 by cvillene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printargs.h"

int	ft_print_p(unsigned long long p)
{
	char	*address;
	int		address_len;

	if (p == 0)
		address = "(nil)";
	else
		address = ft_strjoin("0x", ft_dectohex((long long)p, 1));
	ft_putstr_fd(address, 1);
	address_len = ft_strlen(address);
	if (p != 0)
		free(address);
	return (address_len);
}
