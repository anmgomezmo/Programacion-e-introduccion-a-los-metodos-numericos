#include <iostream>

int main(void){

  int c[2] = {3, 4};

  std::cout << c[0] << std::endl;
  std::cout << c[1] << std::endl;
  std::cout << &c[0] << std::endl;
  std::cout << &c[1] << std::endl;
  std::cout << c << std::endl;
  std::cout << *c << std::endl;
  std::cout << c+1 << std::endl;
  std::cout << *(c+1) << std::endl;
  
  return 0;
}
