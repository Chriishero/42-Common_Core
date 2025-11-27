# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_garden_data.py                                  :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/26 10:28:17 by marvin            #+#    #+#              #
#    Updated: 2025/11/26 10:28:17 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

class Plant:
	def __init__(self, name, height, age):
		self.name = name
		self.height = height
		self.age = age

if __name__ == "__main__":
	p1 = Plant("Rose", 25, 30)
	p2 = Plant("Sunflower", 80, 45)
	p3 = Plant("Cactus", 15, 120)
	plants = [p1, p2, p3]
	print("=== Garden Plant Registry ===")
	for p in plants:
		print(f"{p.name}: {p.height}cm, {p.age} days old")