#include <iostream>
#include <cmath>


int isprime(int m); // returns 1 if a number is prime
void print_primes(int m, int n);
int num_primes(int m); // returns number of primes less or iqual to m

int main(void){

  //testing
  /*
  std::cout << isprime(1) << std::endl;
  std::cout << isprime(2) << std::endl;
  std::cout << isprime(3) << std::endl;
  std::cout << isprime(4) << std::endl;
  std::cout << isprime(7) << std::endl;
  std::cout << isprime(9) << std::endl;
  */
  
  print_primes(3, 100000);  
  return 0;
}

int isprime(int m){
  //magia
  if(m == 1) return 0;
  int flag = 1;
  for(int ii = 2;ii <= std::sqrt(m);++ii){
    if(m%ii == 0){
      flag = 0;
      break;
    }
  }
  return flag;
}

int num_primes(int m){
  int sum = 0;
  for(int ii = 2;ii <= m;++ii){
    if(isprime(ii)){
      sum += 1;
    }
  }
  return sum;
}

void print_primes(int m, int n){
for(int ii = m;ii <= n;++ii){
  std::cout << ii << " "
	    << num_primes(ii) << " "
	    << ii/(std::log(ii)-1.08366) << "\n";
  }
}
