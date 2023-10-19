#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listasSimples.h"



int main()
{
    nodo * lista = inicLista();
    lista = agregarAlPpio(lista, crearNodo(1));
    lista = agregarAlPpio(lista, crearNodo(2));
    lista = agregarAlPpio(lista, crearNodo(3));

    mostrarListaRecursiva(lista);
    lista = borrarNodo(lista,3);
    mostrarLista(lista);


}

