#include "Parking.hpp"
#include "utils.PRO2"

using namespace std;


int main() {
  int accion;
  Parking p;
  p.read_parking();
  while(cin >> accion and tarea != -1) {
    if(tarea == 1) p.meter_coche();
    else if(tarea == 2) p.sacar_coche();
    else if(tarea == 3) p.print_plazas_libres();
  }
}
