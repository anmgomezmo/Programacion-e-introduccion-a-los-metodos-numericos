#include <iostream>

int fibonacci(int n);
int par(int m);

int main(void){

  std::cout << fibonacci(4000000) << "\n";;

  return 0;
}

int fibonacci(int n){
  int term = 0, term1 = 0, term2 = 1, suma = 0;
  std::cout << term1 << "\t" << term2 << "\t";
  for(int i = 1;i < n;++i){
    term = term1 +term2;
    if(term >= n) break;
    std::cout << term << "\t";
    term1 = term2;
    term2 = term;
    if(par(term) == 1){
      suma += term;		 
    }
  }
  std::cout << "\n The sum of odd numbers of the fibonacci sequence is: ";
  return suma;
}

int par(int m){
  if(m%2 == 0){
    return 1;
  }else{
    return 0;
  }
}
