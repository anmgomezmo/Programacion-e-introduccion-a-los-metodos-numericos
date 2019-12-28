#include <iostream> // directiva de preprocesador  
#include <cmath>
#include <cstdio>

const double VAR = 4.0;

int main(void){
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  
  std::cout << std::sin(VAR) << std::endl;
  std::cout << M_PI << std::endl;
  std::cout << std::cos(M_PI) << std::endl;

  std::printf("%25.16le \t %25.16le \n",VAR, std::sin(VAR));
  std::printf("%25.16le \t %25.16le \n",VAR, std::sin(VAR));

  std::cerr << "ERROR ERROR \n"; // codigo 2 
  
  return 0;
}
