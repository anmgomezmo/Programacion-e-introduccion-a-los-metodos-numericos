#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

const double K = 1.23;
const double M = 0.987;
const double W = std::sqrt(K/M); // omega, in rads
const double TF = 35;
const double H = 0.1;
const double NSTEPS = (TF)/H;
const double DIM = 2;

void euler(std::vector<double> & data, double t, double h);
void rk4(std::vector<double> & data, double t, double h);
double f(ind idx, double t, const std::vector<double> & y);

int main(void){

  std::vector<double> y(DIM); 

  // initial conditions
  y[0] = 0.787;
  y[1] = 0.0;

  //time evolution
  for(int ii = 0;ii < NSTEPS;++ii){
    double t = 0.0 + ii*H;
    std::cout << t << " " << y[0] << " " << y[1] << "\n";
    // euler(y, t, H)
    rk4(y, t, H);
  }
  
  
  return 0;
}

void euler(std::vector<double> & data, double t, double h){
  std::vector<double> datatmp = data;
  for(int ii = 0;ii < data.size();++id){
    data[ii] = datatmp[ii] + h*f(ii, t, datatmp); 
  }
}

void rk4(std::vector<double> & data, double t, double h){
  std::vector<double> k1, k2, k3, k4, aux;
  k1.resize(data.size());
  k2.resize(data.size());
  k3.resize(data.size());
  k4.resize(data.size());
  aux.resize(data.size());

  //k1
  for(int ii = 0;ii < data.size();++ii){
    k1[ii] = h*f(ii, t, data);
  }
  //k2 aux
  for(int ii = 0;ii < data.size();++ii){
    aux[ii] = data[ii] + k1[ii]/2;
  }
  //k2
  for(int ii = 0;ii < data.size();++ii){
    k2[ii] = h*f(ii, t + h/2, aux);
  }
  // k3 aux
  for(int ii = 0;ii < data.size();++ii){
    aux[ii] = data[ii] + k2[ii]/2;
  }
  // k3
  for(int ii = 0;ii < data.size();++ii){
    k3[ii] = h*f(ii, t + h/2, aux);
  }
  // k4 aux
  for(int ii = 0;ii < data.size();++ii){
    aux[ii] = data[ii] + k3[ii];
  }
  //k4
  for(int ii = 0;ii < data.size();++ii){
    k4[ii] = h*f(ii, t + h, aux);
  }

  // write new data
  for(int ii = 0;ii < data.size();++ii){
    data[ii] = data[ii] + (k1[ii] + 2*k2[ii] + 2*k3[ii] + k4[ii])/6.0;
  }
}

double f(double t, const std::vector<double> & y, int id){
  if(0 == idx){
    return y[1];
  }else if(1 == idx){
    return -K*std::pow(y[0], 5)/M;
  }else{
    std::cerr << "BAD index : " << idx << std::endl;
    return 0;
  } 
}

