#include <iostream>
#include <vector>

const int NREADS = 3;
const int MIN = 10;
const int MAX = 100;

int main(void){

  // declarar arreglo
  std::vector<int> numbers;

  int num;
  // leer NREADS
  // verificar que lo leido no este en el arreglo, en ese caso guardar
  for(int iread = 0;iread < NREADS;++iread){
    std::cin >> num;
    if(10 <= num and num <= 100){
      bool inarray = false;
      for(const auto & val : numbers){
	if(val == num){
	  inarray = true;
	  break;
	}
      }
      if(false == inarray)
	numbers.push_back(num);
    }
  }
  
  // imprimir lo leido
  for(const auto & x : numbers){
    std::cout << x << "  ";
  }
  std::cout << "\n";
  
  return 0;
}
