#include "Parking.hpp"
#include "utils.PRO2"

using namespace std;


int main() {
  int accion;
  Parking p;
  p.read_parking();
  while(cin >> accion and accion != -1) {
    if(accion == 1) p.meter_coche();
    else if(accion == 2) p.sacar_coche();
    else if(accion == 3) p.print_plazas_libres();
  }
}
