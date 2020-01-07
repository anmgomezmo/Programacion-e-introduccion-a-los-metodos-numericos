#include <iostream>

int multiplo(int n);

int main(void){

  for(int x = 2520;x <= 1000000000;++x){
    if(multiplo(x) == 1){
      std::cout << x << std::endl;
    }
  }
  
  return 0;
}

int multiplo(int n){
  int count = 1;
  for(int ii = 1;ii <= 20;++ii){
    if(n%ii != 0){
      count = 0;
      break;
    }
  }
  return count;
}
