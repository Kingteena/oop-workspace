#include "Musician.h"

Musician::Musician() {
  instrument = "null";
  exeprience = 0;
}

Musician::Musician(std::string instrument, int experience) {
  this->instrument = instrument;
  this->exeprience = experience;
}

std::string Musician::get_instrument() { return instrument; }

int Musician::get_experience() { return exeprience; }
