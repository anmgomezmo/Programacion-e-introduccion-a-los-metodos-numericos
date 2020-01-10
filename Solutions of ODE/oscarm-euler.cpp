#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

const double W = 2.98768765; // omega, in rads

void euler(double ta, double tb, double h, std::vector<double> & y);
double f(double t, const std::vector<double> & y, int id);

int main(void){
  
  const double N = 2;
  const double TA = 0;
  const double TB = 16.4;
  const double H = 0.001;
  std::vector<double> y = {0.12, 0}; // {x0, y0}
  
  euler(TA, TB, H, y);
  
  return 0;
}

void euler(double ta, double tb, double h, std::vector<double> & y){
  const int N = (tb - ta)/h;
  std::vector<double> yaux(y.size());
  for(int nt = 0;nt < N;++nt){
    double t = ta + h*nt;
    std::copy(y.begin(), y.end(), yaux.begin());
    for(int id = 0;id < y.size();++id){
      y[id] = y[id] + h*f(t, yaux, id); // euler
    }
    std::cout << t << "\t" << y[0] << "\t" << y[1] << "\t" << std::endl;
  }
}

double f(double t, const std::vector<double> & y, int id){
  if(0 == id){
    return y[1];
  }else if(1 == id){
    return -W*W*y[0];
  }else{
    std::cerr << "Error!!!!!!!!!! Id does not exist ->" << id << std::endl;
    exit(1);
  } 
}

