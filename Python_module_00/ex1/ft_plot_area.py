# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_plot_area.py                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cvillene <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/26 05:24:16 by cvillene          #+#    #+#              #
#    Updated: 2025/11/26 05:26:24 by cvillene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def ft_plot_area():
	length = int(input("Enter length: "))
	width = int(input("Enter width: "))
	area = length * width
	print(f"Plot area: {area}")
