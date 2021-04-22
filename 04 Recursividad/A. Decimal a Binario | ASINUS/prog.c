#include <stdio.h>

void binario (int N){
   
   if (N>0){
       binario(N/2);
       printf("%d\n", N%2);
   }
}

int main(){
int N;
scanf ("%d", &N);

if (N>=0 && N<=500)
   binario(N);
else 
  printf("Error\n");


return 0;

}
