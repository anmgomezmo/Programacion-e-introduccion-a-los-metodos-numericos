#include <iostream>

int main() {
  int billy[2050000] = {1}; // dies with 2150000
  std::cout << billy[1] << "\n";
  billy[2]=7; 
  return 0;
}
