#include "Parking.hpp"

Parking::Parking() {
}

Parking::~Parking() {
}

void Parking::read_parking() {
  cin >> plazas_libres;
}

void Parking::meter_coche() {
  Coche c;
  c.read_coche();
  aparcados.push_front(c);
  plazas_libres--;
}

void Parking::sacar_coche() {
  boolean found = false;
  int matricula_a_sacar;
  cin >> matricula_a_sacar;
  for(list<Coche>::iterator it = aparcados.begin();
      it != aparcados.end() && !found; it++) {
    if(it->get_matricula() == matricula_a_sacar) {
      aparcados.erase(it);
      found = true;
    }
  }
  plazas_libres++;
}

void Parking::print_plazas_libres() {
  cout << plazas_libres << endl;
}
