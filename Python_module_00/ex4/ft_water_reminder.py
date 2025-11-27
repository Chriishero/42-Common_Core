# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_water_reminder.py                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cvillene <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/26 05:42:52 by cvillene          #+#    #+#              #
#    Updated: 2025/11/26 05:44:31 by cvillene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def ft_water_reminder():
	last_watering = int(input("Days since last watering: "))
	if last_watering > 2:
		print("Water the plants!")
	else:
		print("Plants are fine")
