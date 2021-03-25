
typedef struct{
   int tipo;
   char nombre[11];
} TCliente;

typedef TCliente T;

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




int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
