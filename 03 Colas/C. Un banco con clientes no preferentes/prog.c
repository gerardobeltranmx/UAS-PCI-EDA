#define MAX 10000

//****************************************
// Pila
//***************************************
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
} TPila;

//Iniciar Pila
void iniciarPila(TPila *pila, int N){
    pila->elementos= (T *) malloc(sizeof(T)*N);
    pila->tam=N;
    pila->tope=-1;
}
// Agregar un dato a la Pila
void agregarPila(TPila *pila, T dato){
    pila->tope++;
    pila->elementos[pila->tope]=dato;
}

// Extraer un dato de la Pila
T extraerPila(TPila *pila){
    T dato;
    dato = pila->elementos[pila->tope];
    pila->tope--;
    return dato;
}


//****************************************
// Cola
//***************************************
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
void agregarCola(TCola *cola, T dato){
    cola->final++;
    cola->elementos[cola->final]=dato;
}

// Extrae un dato de la cola
T extraerCola(TCola *cola){
int i;

T dato = cola->elementos[cola->frente];
    
    for(i=0; i<cola->final; i++)
        cola->elementos[i]=cola->elementos[i+1];
    cola->final--;    
    return dato;
}


int main(int argc, char const *argv[])
{

    TPila filaP;
    TCola filaC;
    int N, i, tipo;
    char op;
    TCliente cliente;

    iniciarPila(&filaP, MAX);
    iniciarCola(&filaC);

     scanf("%d", &N);

    for (i=0; i < N ; i++){

        scanf("%c", &op);

        switch (op)
        {
        case 'E':
                scanf ("%d%s", &cliente.tipo, cliente.nombre);
                if (cliente.tipo==1)
                    agregarCola(&filaC, cliente);
                else
                    agregarPila(&filaP, cliente);    
            break;
        case 'A':
                scanf ("%d", &tipo);
                if (tipo==1)
                     cliente = extraerCola(&filaC);
                else
                    cliente = extraerPila(&filaP);        

                printf ("%s\n", cliente.nombre);

            break;
        }


    }




    /* code */
    return 0;
}
