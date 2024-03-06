def spot(anim):
    anim.make_sound()

class animal:   
    def __init__(self, name, weight):
        self.name = name
        self.weight = weight
        
    isFed = False
    
    def feed(self):
        isFed = True
        
class bird(animal):
    animal_class = "bird"        
    hasEggs = True
    def collect_eggs(self):
        hasEggs = False
        
class mammal(animal):
    animal_class = "mammal"
    isMilked = False
    def milk(self):
        isMilked = True
        
class sheep(mammal):
    animal_type = "sheep"
    isSheared = False
    def shear(self):
        isSheared = True
    def make_sound(self):
        print("baaaa")
        
class cow(mammal):
    animal_type = "cow"
    def make_sound(self):
        print("moooo")
        
class goat(mammal):
    animal_type = "goat"
    def make_sound(self):
        print("beeee")

class chick(bird):
    animal_type = "chick"
    def make_sound(self):
        print("cluck")

class goose(bird):
    animal_type = "goose"
    def make_sound(self):
        print("honk")

class duck(bird):
    animal_type = "duck"
    def make_sound(self):
        print("quack")

animals = []
animals.append(goose("Белый", 5))
animals.append(goose("Серый", 6))
animals.append(chick("Ко-ко", 3))
animals.append(chick("Кукареку", 4))
animals.append(duck("Кряква", 8))
animals.append(cow("Манька", 120))
animals.append(goat("Рога", 50))
animals.append(goat("Копыта", 60))
animals.append(sheep("Барашек", 65))
animals.append(sheep("Кудрявый", 55))
  
for a in animals:
    a.feed()
    print(a.name, "is fed. Its weight is", a.weight)    
    if a.animal_class == "bird" and a.hasEggs:
        a.collect_eggs()
        print("Collected eggs")
    if a.animal_class == "mammal" and not a.isMilked:
        a.milk()
        print("Milked")
    if a.animal_type == "sheep" and not a.isSheared:
        a.shear()
        print("Sheared")
