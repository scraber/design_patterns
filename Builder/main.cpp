
#include "Animal.h"
#include "AnimalDictator.h"
#include "DogBuilder.h"
#include "DolphinBuilder.h"

int main() {
  AnimalDictator we_dont_clone_animals_here;
  {
    DogBuilder dog;

    we_dont_clone_animals_here.MakeAnimal(dog);
    Animal::Shared animal = dog.GetAnimal();
  }
  {
    DolphinBuilder dolphin;
  
    we_dont_clone_animals_here.MakeAnimal(dolphin);
    Animal::Shared animal = dolphin.GetAnimal();
  }
}