#include "AnimalDictator.h"

Animal::Shared AnimalDictator::MakeAnimal(AnimalBuilder& builder) {
  builder.NewAnimal();
  builder.BuildGroup();
  builder.BuildLimbs();
  builder.BuildLiving();
  builder.BuildSkin();
  return builder.GetAnimal();
}