#include <stdio.h>
// Definición del tamaño de la cola
#define MAX 1000
#define  T char
#define FALSE 0
#define TRUE 1 

typedef int bool;

// Definición de la estructura de datos
typedef struct{
    int frente, final;
    T elementos[MAX];
} TCola;

//Inicializa una cola
void iniciarCola(TCola *cola){
    cola->frente=0;
    cola->final=-1;
}
// Agrega un dato a la cola
void agregarCola(TCola*cola, T dato){
    cola->final++;
    cola->elementos[cola->final]=dato;
}

// Extrae un dato de la cola
T extraerCola(TCola *cola){
int i;
T dato = cola->elementos[cola->frente];
    for(i=0; i<cola->final-1; i++)
    cola->elementos[i]=cola->elementos[i+1];
    cola->final--;
    return dato;
}
// Obtiene el dato del frente de la cola sin extraer
T obtenerElementoFrenteCola(TCola cola){
    return  cola.elementos[cola.frente];
}

// Determina si la cola esta vacía
bool vaciaCola(TCola cola){
    return(cola.final==-1)?TRUE:FALSE;
}
// Determina si la cola esta llena
bool llenaCola(TCola cola){
    return(cola.final==MAX-1)?TRUE:FALSE;
}

// Obtiene numero de elementos de la cola
bool numElementosCola(TCola cola){
return cola.final+1;
}
// Obtiene un elemento de la cola de una posición
T obtenerElementoCola(TCola cola, int pos){
    return cola.elementos[pos];
}

int main(){





return 0;

}
