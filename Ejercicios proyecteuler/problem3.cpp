#include <iostream>
#include <cmath>

void print_numbers(int n, unsigned long int m);
int isprime(unsigned long int n);

int main(void){

  print_numbers(1, 600851475143);
  
  return 0;
}

void print_numbers(int n, unsigned long int m){
  for(int ii = n;ii <= m;++ii){
    if(isprime(ii)){
      std::cout << isprime(ii) << "\t" << ii  << std::endl; 
    }
  }
}

int isprime(unsigned long int n){
  if(n == 1) return 0;
  int target = 1;
  for(int ii = 2;ii <= std::sqrt(n);++ii){
    if(n%ii == 0){
      target = 0;
      break;
    }
  }
  return target;
}
