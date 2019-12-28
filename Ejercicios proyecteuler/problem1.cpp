#include <iostream>

int multiplo3(int n);
int multiplo5(int m);

int main(void){

  int sum1 = 0, sum2 = 0;
  for(int i = 3;i < 1000;++i){
    sum1 += multiplo3(i);
  }
  for(int i = 3;i < 1000;++i){
    sum2 += multiplo5(i);
  }

  std::cout << sum1+sum2 << std::endl;
  
  return 0;
}

int multiplo3(int n){
  if(n%3 == 0) return n;
}

int multiplo5(int m){
  if(m%5 == 0) return m; 
}
