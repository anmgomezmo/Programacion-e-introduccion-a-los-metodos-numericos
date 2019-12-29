#include <iostream> 

void ref(int m, const int & n)
{
  m = 35;
  //n = 36;
  std::cout << &m << "\n";
  std::cout << &n << "\n";
  std::cout << m << "\n";
  std::cout << n << "\n";
}

int main(){
  int a = 33, b = 34;

  ref(a, b);
  std::cout << &a << "\n";
  std::cout << &b << "\n";
  std::cout << a << "\n";
  std::cout << b << "\n";
  
  return 0;
}
