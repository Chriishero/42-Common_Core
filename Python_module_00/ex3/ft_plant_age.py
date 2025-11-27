# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_plant_age.py                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cvillene <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/26 05:39:52 by cvillene          #+#    #+#              #
#    Updated: 2025/11/26 05:42:16 by cvillene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def ft_plant_age():
	plant_age = int(input("Enter plant age in days: "))
	if plant_age > 60:
		print("Plant is ready to harvest!")
	else:
		print("Plant needs more time to grow.")
