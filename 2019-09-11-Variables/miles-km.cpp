#include <iostream> 

int main(void)
{
  double miles {0.0};
  double km  {0.0};
  std::cout << "Escribe el numero de millas :\n" ;
  std::cin >> miles;
  km = miles*1.609;
  std::cout << "Km : " << km << "\n";
  
  return 0;
}
