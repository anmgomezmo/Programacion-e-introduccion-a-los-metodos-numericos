#include <iostream>
#include <cmath>

int palindromo(int n);

int main(void){

  /* for(int ii = 1;ii <= pow(10, std::log10(n));ii *= 10){
    std::cout << n/ii << "\t" << std::log10(n) <<  std::endl;
    }*/
#pragma omp parallel num_threads(2)
  int n = 0;
  for(int x = 100;x < 1000;++x){
    for(int y = 100;y < 1000;++y){
      n = x*y;
      if(palindromo(n)==1){
	std::cout << "El siguiente numero es palindromo: " << n << std::endl;
	std::cout << x << "\n" << y << std::endl; 
      }
    }
  }
  
  return 0;
}

int palindromo(int n){

  int exp = log10(n), i[exp+1] = {0}, suma = 0, count;
  for(int j = 1;j <= exp + 1;++j){
    for(int k = 1;k <= j-1;++k){
      suma += i[k]*pow(10,j-k);
    }
    i[j] = n/pow(10, exp-j+1) - suma;
    //std::cout << i[j] << "\t" << std::endl;
    suma = 0;
  }
  for(int l = 1;l <= (exp+1)/2;++l){
    count = 1;
    if(i[l] != i[exp+2-l]){
      count = 0;
      break;
    }  
  }
  return count;
}
