class GardenManager:
    def __init__(self, owner_name):
        self.owner_name = owner_name
        self.plants = {}

    def add_plant(self, name, height):
        self.plants[name] = height
        print(f"Added {name} to {self.owner_name}'s garden")

    def grow_plants(self, size=1):
        for name, height in self.plants:
            self.plants[name] = height + size
            print(f"{name} grew {size}cm")

    @staticmethod
    def create_garden_network(self):
        pass
