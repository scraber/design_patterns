#ifndef ANIMAL_DICTATOR_H_
#define ANIMAL_DICTATOR_H_

#include <memory>
#include "AnimalBuilder.h"

class AnimalDictator {
 public:
  AnimalDictator() {}
  Animal::Shared MakeAnimal(AnimalBuilder& builder);

 protected:
 private:
};

#endif
