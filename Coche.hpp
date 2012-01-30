#include <iostream>
using namespace std;

class Coche {
private:
  int matricula;

public:
  Coche();
  ~Coche();

  void read_coche();
  int get_matricula();
  void set_matricula(int m);
};
