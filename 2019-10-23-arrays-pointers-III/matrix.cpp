#include <iostream>

int main(void){
  
  // declarar las matrices
  const int M = 5, N = 5;
  int A[M][N] = {{0}};
  int AT[N][M] = {{0}};
  int ii, jj;
  
  for(ii = 0;ii < M;++ii){
    for(jj = 0;jj < N;++jj){
      A[ii][jj] = ii*N + jj;
    } 
  }
  
  std::cout << "# Original matrix : \n";
  for(ii = 0;ii < M;++ii){
    for(jj = 0;jj < N;++jj){
      std::cout << A[ii][jj] << "\t";
    }
    std::cout << "\n";
  }
  
  // procesarla: transponerla
  for(ii = 0;ii < M;++ii){
    for(jj = 0;jj < N;++jj){
      AT[jj][ii] = A[ii][jj];
    } 
  }

  //imprimirla
  std::cout << "# Transposed Matrix : \n";
  for(ii = 0;ii < M;++ii){
    for(jj = 0;jj < N;++jj){
      std::cout << AT[ii][jj] << "\t";
    }
    std::cout << "\n";
  }
  
  return 0;
}
