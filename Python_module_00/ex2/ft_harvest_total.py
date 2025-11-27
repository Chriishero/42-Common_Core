# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_harvest_total.py                                :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cvillene <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/26 05:27:49 by cvillene          #+#    #+#              #
#    Updated: 2025/11/26 05:36:53 by cvillene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def ft_harvest_total():
	days = []
	for i in range(3):
		days.append(int(input(f"Day {i + 1} harvest: ")))
	totals = 0
	[totals := totals + d for d in days]
	print("Total harvest:", totals)
