#include <iostream>

int main(void){

  int a = 0;
  std::cin >> a;
  if(a%3 == 0){
    std::cout << "Number " << a << " Can be divided by 3 \n";
  }
  else{
    std::cout << "Number " << a << " Cannot be divided by 3 \n";
  }
  
  return 0;
}
