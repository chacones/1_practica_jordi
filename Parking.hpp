#include <iostream>
#include <list>
#include "Coche.hpp"
using namespace std;

class Parking {
  list<Coche> coches_aparcados;
  int plazas_libres;

  Parking();
  ~Parking();

  void meter_coche();
  void sacar_coche();
  void plazas_libres();
}
