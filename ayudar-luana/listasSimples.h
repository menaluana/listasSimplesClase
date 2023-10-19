#ifndef LISTASSIMPLES_H_INCLUDED
#define LISTASSIMPLES_H_INCLUDED

typedef struct
{
    int dato;
    struct nodo * siguiente;
} nodo;


nodo * inicLista ();
int ingresarDato ();
nodo * crearNodo (int datoNuevo);
nodo * agregarAlPpio (nodo * lista, nodo * nodoNuevo);
void printearDato(int dato);
void mostrarListaRecursiva (nodo * lista);
void mostrarLista (nodo * lista);
nodo * agregarAlFinal(nodo * lista, nodo * nodoNuevo);
nodo * agregarEnOrden (nodo * lista, nodo* nodoNuevo);
nodo * borrarNodo (nodo * lista, int dato);


#endif // LISTASSIMPLES_H_INCLUDED
