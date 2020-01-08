#include <iostream>
#include <vector>
#include <string>

struct Estudiante{
  std::string name, id;
  int n_notas = 0;
  double *notas;
};

void setup_notas(Estudiante & e, int NNOTAS);

int main(void){

  Estudiante e1, e2;
  e1.name = "Nombre estudiante 1";
  e1.id = "1234567890123456";
  setup_notas(e1, 5);
  e1.notas[0] = 4.5;
  
  e2.name = "Nombre estudiante 2";
  e2.id = "98765432109876";

  return 0;
}

void setup_notas(Estudiante & e, int NNOTAS){
  e.n_notas = NNOTAS;
  e.notas = new double [NNOTAS];
}
