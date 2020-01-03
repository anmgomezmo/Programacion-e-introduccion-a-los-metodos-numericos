#include <cstdio> // printf
#include <cmath>

int main(void){

  const double xmin = 0.0;
  const double xmax = 10.0;
  const double dx = 0.1;
  const int NSTEPS = (xmax - xmin)/dx;

  for(int ii = 0;ii <= NSTEPS;++ii){
    double x = xmin + ii*dx;
    std::printf("%25.16e \t %25.16e \n", x, std::tgamma(x));
  }

  /* for(double x = xmin;x <= xmax;x += dx){
     // no debemos hacer loops sobre flotantes porque el error de truncamiento crece con la suma, es decir, no podemos representar exactamente los numeros flotantes en el computador; en cambio los enteros si y no llevan error de truncamiento.
     }*/

  return 0;
}
