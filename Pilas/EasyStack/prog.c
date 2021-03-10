
#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
// Definición del tipo de datos de la Pila
typedef int T;

// Definición del la estructura de la Pila
typedef struct{
    int tam; //Tamaño de la pila
    int tope;
    T *elementos; //Datos de la pila con apuntador
} Tpila;
//Iniciar Pila
void iniciarPila(Tpila *pila, int N){
    pila->elementos= (T *) malloc(sizeof(T)*N);
    pila->tam=N;
    pila->tope=-1;
}
// Agregar un dato a la Pila
void agregarPila(Tpila *pila, T dato){
    pila->tope++;
    pila->elementos[pila->tope]=dato;
}

// Extraer un dato de la Pila
T extraerPila(Tpila *pila){
    T dato;
    dato = pila->elementos[pila->tope];
    pila->tope--;
    return dato;
}
//Obtener dato del tope sin extraerlo
T obtenerElementoTopePila(Tpila pila){
return pila.elementos[pila.tope];
}

//Determina si la Pila esta vacía
int vaciaPila(Tpila pila){
    return(pila.tope==-1)?TRUE:FALSE;
}
//Determina si la Pila esta llena
int llenaPila(Tpila pila){
    return(pila.tope==pila.tam-1)?TRUE:FALSE;
}

//Obtiene numero de elementos de la Pila
int numElementosPila(Tpila pila){
    return pila.tope+1;
}
//Obtiene un elemento de la Pila de alguna posición
T obtenerElementoPila(Tpila pila, int pos){
    return pila.elementos[pos];
}

int main(int argc, char const *argv[])
{
    Tpila miPila;
    int N, i, p, valor;
    scanf("%d", &N);
    iniciarPila(&miPila, N);

    for (i=0; i<N; i++){

        scanf("%d", &p);


        switch (p)
        {
        case 1:
            scanf("%d", &valor);
            if (llenaPila(miPila)==FALSE)
                agregarPila(&miPila, valor);
            break;
        
        case 2:
           if (vaciaPila(miPila)==FALSE)
                extraerPila(&miPila);
           break;
        case 3:
            if (vaciaPila(miPila))
                printf("Empty!\n");
            else
               printf("%d\n", obtenerElementoTopePila(miPila));

            break;
         }

    }

    return 0;
}
