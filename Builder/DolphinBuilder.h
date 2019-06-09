#ifndef DOLPHIN_BUILDER_H_
#define DOLPHIN_BUILDER_H_

#include "AnimalBuilder.h"

class DolphinBuilder : public AnimalBuilder {
 public:
  DolphinBuilder() {}
  void BuildGroup() { animal_->set_group(Animal::GROUP::MAMMAL); }
  void BuildLimbs() { animal_->set_limbs(3, Animal::LIMBS_TYPE::FINS); }
  void BuildLiving() { animal_->set_living(Animal::ENVIRONMENT::WATER); }
  void BuildSkin() { animal_->set_skin(Animal::SKIN_TYPE::NONE); }

 protected:
 private:
};

#endif 