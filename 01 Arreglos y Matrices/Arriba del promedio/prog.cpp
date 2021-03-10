#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, j, i, suma, c, cont;
    float prom, porcentaje;
    cin >> c;
    
    for (j=0;j<c; j++){
        
        suma = 0, cont=0;
        cin >> n;
        int calif[n];
        // leer datos de cada caso
        for (i=0; i<n; i++){
         cin >> calif[i];
         suma+=calif[i];  
        }
        // calculo de promedio
        prom = (float) suma / n;
        
        for (i=0; i<n; i++) // Cuenta superiores al promedio
            if (calif[i]>prom) cont++;
    
        porcentaje = ( (float) cont / n ) * 100;    
        
        cout << fixed << setprecision(3)<< porcentaje <<"%"<< endl;
    }
    return 0;
}