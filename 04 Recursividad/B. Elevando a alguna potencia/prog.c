#include <stdio.h>

int potencia(int a, int b)
{
    // potencia(5,3) = 5 * 5 * 5
    // potencia (3,5) = 3 * 3 * 3 * 3 * 3
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
