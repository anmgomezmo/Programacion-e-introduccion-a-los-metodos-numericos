#include <iostream>
#include <vector>
#include <cstdlib>

const int NTRY = 360000;

int main(void){

  srand(1);
  // arreglo para guardar los resultados
  std::vector<int> results(6);
  
  // lanzar el dado n veces
  for(int itry = 0;itry < NTRY;++itry){
    results[rand()%6] += 1;
  }

  // imprimir la frecuencia
  for(const auto & x : results){
    std::cout << x << "\n";
  }
  
  return 0;
}
