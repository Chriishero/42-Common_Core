# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_count_harvest_recursive.py                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cvillene <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/26 05:46:55 by cvillene          #+#    #+#              #
#    Updated: 2025/11/26 05:51:13 by cvillene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def ft_count_harvest_recursive(days = None, i = None):
	if days == None:
		days = int(input("Days until harvest: "))
		i = 1
	if i <= days:
		print(f"Day {i}")
		ft_count_harvest_recursive(days, i + 1)
	else:
		print("Harvest time!")

ft_count_harvest_recursive()
