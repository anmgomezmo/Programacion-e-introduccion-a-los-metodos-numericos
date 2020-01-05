#include <cmath>
#include <iostream>

using fptr = double (double);

double f(double x);
double simpson(double h, double x0, double xf, fptr fun);
double trapecio(double h, double x0, double xf, fptr fun);
double trapecio_richardson(double h, double x0, double xf, fptr fun);

int main(void)
{
  std::cout.precision(16); std::cout.setf(std::ios::scientific);
  
  for (double h = 0.1; h >= 1.0e-10; h /= 2.0) {
    std::cout << h << "\t"
	      << std::fabs(trapecio(h, 0.0, 2*M_PI, f)) << "\t"
	      << std::fabs(trapecio_richardson(h, 0.0, 2*M_PI, f)) << "\t"
	      << std::fabs(simpson(h, 0.0, 2*M_PI, f)) << "\n";
  }
  
  return 0;
}

double f(double x)
{
  return std::sin(x);
}


double trapecio(double h, double x0, double xf, fptr fun)
{
  double sum = 0.0;
  double x = 0.0;
  int N = (xf-x0)/h;
  for(int ii = 1; ii <= N-1; ++ii ) {
    x = x0 + ii*h;
    sum += 2*fun(x);
  }
  sum += fun(x0) + fun(xf);
  return sum*h/2;
}

double trapecio_richardson(double h, double x0, double xf, fptr fun)
{
  return (4*trapecio(h/2, x0, xf, fun) - trapecio(h, x0, xf, fun))/3;
}

double simpson(double h, double x0, double xf, fptr fun)
{
  double sum1 = 0.0, sum2 = 0.0;
  double x = 0.0;
  int N = (xf-x0)/h;
  if (N%2 != 0) N = N+1;

  for(int ii = 1; ii <= N/2; ++ii ) {
    x = x0 + 2*ii*h;
    sum1 += fun(x);
  }
  for(int ii = 1; ii <= N/2; ++ii ) {
    x = x0 + (2*ii-1)*h;
    sum2 += fun(x);
  }
  return h*(fun(x0)+fun(xf) + 2*sum1 + 4*sum2)/3;
}
