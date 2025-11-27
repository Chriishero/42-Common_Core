# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_plant_factory.py                                :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/26 10:51:56 by marvin            #+#    #+#              #
#    Updated: 2025/11/26 10:51:56 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

class Plant:
	def __init__(self, name, height, age):
		self.name = name
		self.height = height
		self.age = age
		print(f"Created : {self.name} ({self.height}cm, {self.age} days)")

def ft_listlen(lst: list):
	i = 0
	for element in lst:
		i += 1
	return i

if __name__ == "__main__":
	names_list = ["Rose", "Oak", "Cactus", "Sunflower", "Fern"]
	heights_list = [25, 200, 5, 80, 15]
	ages_list = [30, 365, 90, 45, 120]
	
	n_plant = ft_listlen(names_list)
	print(f"=== Plant Factory Output ===")
	plants = [Plant(names_list[i], heights_list[i], ages_list[i]) for i in range(n_plant)]
	print(f"\nTotal plants created : {n_plant}")