#include <iostream>
#include <cmath>

void statistics(const double arr[], int N, double & res1, double & res2);
//arreglos por defecto se pasan por referencia 

int main(void){

  const int N = 10;
  //  double data[N] = {1,1,1,1,1,1,1,1,1,1};
  //  double data[N] = {0};
  double data[N] = {1,2,3,4,5,6,7,8,9,10};

  double average, stddev;
  statistics(data, N, average, stddev);

  std::cout << "# Average: " << average << "\n";
  std::cout << "# stddev: " << stddev << "\n";
 
  return 0;
}

void statistics(const double arr[], int N, double & res1, double & res2){

  // average and stddev
  double sum = 0.0, sum2 = 0.0;
 
  for(int ii = 0;ii < N;++ii){ 
    sum += arr[ii];		  
    sum2 += arr[ii]*arr[ii]; 
  }
  
  res1 = sum/N;
  res2 = std::sqrt(sum2/N - (res1*res1));
  
}
