#include <iostream>
#include <list>
#include "Coche.hpp"
using namespace std;

class Parking {
private:
  list<Coche> aparcados;
  int plazas_libres;

public:
  Parking();
  ~Parking();

  void read_parking();
  void meter_coche();
  void sacar_coche();
  void print_plazas_libres();
};
