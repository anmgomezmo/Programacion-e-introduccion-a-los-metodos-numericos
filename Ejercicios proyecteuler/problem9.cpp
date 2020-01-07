#include <iostream>
#include <cmath>

int main(void){
  std::cout.precision(16);
  double c = 0.0;
  for(int a = 2;a <= 1000;++a){
    for(int b = 2;b <= 1000;++b){
      c = std::sqrt(a*a + b*b);
      if(a+b+c == 1000.0){
	std::cout << a << "\t" << b << "\t" << c << "\t"
		  << a+b+c << "\t" << a*b*c << std::endl;
	break;
      }
    }
  }
  
  return 0;
}
