# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_count_harvest_iterative.py                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cvillene <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/26 05:45:19 by cvillene          #+#    #+#              #
#    Updated: 2025/11/26 05:46:45 by cvillene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def ft_count_harvest_iterative(int n):
	days = int(input("Days until harvest: "))
	for i in range(days):
		print(f"Day {i + 1}")
	print("Harvest time!")
