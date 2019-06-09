#ifndef ANIMAL_BUILDER_H_
#define ANIMAL_BUILDER_H_

#include <memory>
#include "Animal.h"

class AnimalBuilder {
  typedef std::shared_ptr<AnimalBuilder> Shared;

 public:
  virtual void NewAnimal() { animal_.reset(new Animal); }
  virtual void BuildGroup() {}
  virtual void BuildLimbs() {}
  virtual void BuildLiving() {}
  virtual void BuildSkin(){};

  virtual Animal::Shared GetAnimal() { return animal_; }

 private:
 protected:
  AnimalBuilder() : animal_(nullptr) {}
  Animal::Shared animal_{};
};

#endif