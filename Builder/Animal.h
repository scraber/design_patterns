#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <cstdint>
#include <memory>
#include <string>

class Animal {
 public:
  Animal();
  ~Animal();

  enum class GROUP {
    NONE,
    INVERTEBRATE,
    FISH,
    AMPHIBIAN,
    REPTILE,
    BIRD,
    MAMMAL,
  };

  enum class ENVIRONMENT {
    NONE,
    AIR,
    WATER,
    LAND,
  };

  enum class LIMBS_TYPE {
    NONE,
    FINS,
    PAWS,
    WINGS,
  };

  enum class SKIN_TYPE {
    NONE,
    FUR,
    SCALES,
    FEATHERS,
  };

  typedef std::shared_ptr<Animal> Shared;

  /* getters */
  GROUP group();
  LIMBS_TYPE limbs_type();
  std::uint8_t limbs_quantity();
  ENVIRONMENT living();
  SKIN_TYPE skin();

  /* setters */
  void set_group(GROUP group);
  void set_limbs(std::uint8_t quantity, LIMBS_TYPE type);
  void set_living(ENVIRONMENT living);
  void set_skin(SKIN_TYPE skin);

 private:
  GROUP group_{GROUP::NONE};
  struct {
    std::uint8_t quantity_{0};
    LIMBS_TYPE type_{LIMBS_TYPE::NONE};
  } limbs_;
  ENVIRONMENT living_{ENVIRONMENT::NONE};
  SKIN_TYPE skin_{SKIN_TYPE::NONE};
};

#endif 