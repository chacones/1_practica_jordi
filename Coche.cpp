#include "Coche.hpp"

Coche::Coche() {
}

Coche::~Coche() {
}

void Coche::read_coche() {
  cin >> matricula;
}

int Coche::get_matricula() {
  return matricula;
}

void Coche::set_matricula(int m) {
  matricula = m;
}
