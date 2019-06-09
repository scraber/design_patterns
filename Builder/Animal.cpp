#include "Animal.h"

Animal::Animal() {}

Animal::~Animal() {}

/* getters */
Animal::GROUP Animal::group() { return Animal::group_; }
Animal::LIMBS_TYPE Animal::limbs_type() { return Animal::limbs_.type_; }
std::uint8_t Animal::limbs_quantity() { return Animal::limbs_.quantity_; }
Animal::ENVIRONMENT Animal::living() { return Animal::living_; }
Animal::SKIN_TYPE Animal::skin() { return Animal::skin_; }

/* setters */
void Animal::set_group(GROUP group) { Animal::group_ = group; }
void Animal::set_limbs(std::uint8_t quantity, LIMBS_TYPE type) {
  Animal::limbs_.quantity_ = quantity;
  Animal::limbs_.type_ = type;
}
void Animal::set_living(ENVIRONMENT living) { Animal::living_ = living; }
void Animal::set_skin(SKIN_TYPE skin) { Animal::skin_ = skin; }