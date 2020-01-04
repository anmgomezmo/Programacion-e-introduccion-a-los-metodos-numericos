#include <iostream>
#include <cmath>

void print_numbers(unsigned long int m);

int main(void){

  print_numbers(600851475143);
  
  return 0;
}

void print_numbers(unsigned long int m){
  for(int ii = 2;ii <= m;++ii){
    if(m%ii == 0){
      std::cout << ii << std::endl;
      m = m/ii;
    }
  }
}
// aqui me estoy ahorrando un loop extra, no tengo que hacer la division para 2, y para el nuevo m otra vez 2, en vez de eso, para los pares muestra multiplos de 2 que es lo mismo

