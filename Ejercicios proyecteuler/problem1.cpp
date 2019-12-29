#include <stdio.h>

int main (void)
{
  int i, res1, res2, suma=0, j;
  scanf("%d",&j);

  for(i=1;i<j;i=i+1){
    
    res1=i%3;
    res2=i%5;

    if(res1==0 || res2==0){
    printf("%d Multiplo de 3 o 5 \n",i);
    suma=suma+i;
    }
  }
  printf("Suma = %d \n",suma);
  return 0;
}
