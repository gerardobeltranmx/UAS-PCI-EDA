#include <stdio.h>

int potencia(int a, int b)
{
    // potencia(5,3) = 5 * 5 * 5
    // potencia (5,3) = 5 * potencia (5,2)
    // potencia (5,2) = 5 * potencia (5,1)
    // potencia (5,1) = 5                     
    if (b==1)
      return a;
    else
       return a * potencia(a, b-1);
}
int main(){
int a,b;
scanf ("%d %d", &a, &b);
printf("%d\n", potencia(a,b));

return 0;

}
