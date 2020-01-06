#include <iostream>

int main() {
  int billy[10] = {1}; // dies with 2150000
  std::cout << billy[1] << "\n";
  billy[10]=7;
  std::cout << billy[10] << "\n";
  return 0;
}
