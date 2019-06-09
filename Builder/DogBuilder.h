#ifndef DOG_BUILDER_H_
#define DOG_BUILDER_H_

#include "AnimalBuilder.h"

class DogBuilder : public AnimalBuilder {
 public:
  DogBuilder() {}
  void BuildGroup() { animal_->set_group(Animal::GROUP::MAMMAL); }
  void BuildLimbs() { animal_->set_limbs(4, Animal::LIMBS_TYPE::PAWS); }
  void BuildLiving() { animal_->set_living(Animal::ENVIRONMENT::LAND); }
  void BuildSkin() { animal_->set_skin(Animal::SKIN_TYPE::FUR); }

 protected:
 private:
};

#endif DOG_BUILDER_H_