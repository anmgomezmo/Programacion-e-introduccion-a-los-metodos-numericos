#include <iostream>

int main(void){

  int sum1 = 0, sum2 = 0;
  for(int ii = 1;ii <= 100;++ii){
    sum1 += ii*ii;
  }
  std::cout << sum1 << std::endl;
  for(int ii = 1;ii <= 100;++ii){
    sum2 += ii;
  }
  std::cout << sum2 << std::endl;
  
  std::cout << sum2*sum2 - sum1 << std::endl;
  
  return 0;
}
