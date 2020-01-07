#include <iostream>

int isprime(int n);

int main(void){
  int cont = 0;
  for(int ii = 2;ii <= 1000000;++ii){
    if(isprime(ii) == 1){
      cont++;
      std::cout << ii << "\t" << cont << std::endl;
      if(cont >= 10001) break;
    }
  }

  return 0;
}

int isprime(int n){
  int count = 1;
  if(n == 2 || n == 3){
    count = 1;
  }else{
    for(int ii = 2;ii <= n/2;++ii){
      if(n%ii == 0){
	count = 0;
	break;
      }
    }
  }
  return count;
}
