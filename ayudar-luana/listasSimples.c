#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listasSimples.h"


nodo * inicLista ()
{
    return NULL;
}

int ingresarDato ()
{
    int dato;
    printf("Ingrese un dato: \n");
    fflush(stdin);
    scanf ("%i", &dato);

    return dato;
}

nodo * crearNodo (int datoNuevo)
{
    nodo *nodoNuevo =(nodo*) malloc(sizeof (nodo));
    nodoNuevo->dato = datoNuevo;
    nodoNuevo->siguiente = NULL;

    return nodoNuevo;
}

nodo * agregarAlPpio (nodo * lista, nodo * nodoNuevo)
{
    nodoNuevo->siguiente = lista;

    return nodoNuevo;
}

void printearDato(int dato)
{
    printf(" %i \n", dato);
}

void mostrarListaRecursiva (nodo * lista)
{
    if(lista !=NULL)
    {
        printearDato(lista->dato);
        mostrarListaRecursiva(lista->siguiente);
    }
}

void mostrarLista (nodo * lista)
{
    while(lista !=NULL)
    {
        printearDato(lista->dato);
        lista = lista->siguiente;
    }
}

nodo * agregarAlFinal(nodo * lista, nodo * nodoNuevo)
{

    nodo * seguidora = lista;
    if (lista == NULL)
    {
        lista = nodoNuevo;

    }
    else
    {
        while (seguidora->siguiente !=NULL)
        {
            seguidora = seguidora->siguiente;

        }
        seguidora->siguiente = nodoNuevo;
    }
    return lista;
}

nodo * agregarEnOrden (nodo * lista, nodo* nodoNuevo)
{
    nodo * seguidora = lista->siguiente;
    nodo * anterior = lista;
    if(lista == NULL)
    {
        lista = nodoNuevo;
    }
    else
    {
        if(lista->dato > nodoNuevo->dato)
        {
            lista = agregarAlPpio(lista, nodoNuevo);
        }
        else
        {
            while (seguidora!= NULL && seguidora->dato < nodoNuevo->dato)
            {
                anterior = seguidora;
                seguidora = seguidora->siguiente;

            }
            anterior->siguiente = nodoNuevo;
            if (seguidora != NULL)
            {
                nodoNuevo->siguiente = seguidora;

            }

        }
    }
    return lista;
}

nodo * borrarNodo (nodo * lista, int dato)
{
    nodo * aux = lista;
    nodo * seguidora = lista->siguiente;
    nodo * anterior = lista;
    if (lista ==NULL)
    {
        printf ("LA LISTA ESTA VACIA!\n");
    }
    else
    {
        if(lista->dato == dato)
        {
            lista= lista->siguiente;
            aux->siguiente=NULL;
            free(aux);
        }
        else
        {
            while(seguidora !=NULL && seguidora->dato != dato)
            {
                anterior = seguidora;
                seguidora = seguidora->siguiente;

            }
            if (seguidora == NULL)
            {
                printf("EL DATO NO SE ENCUENTRA EN LA LISTA\n");
            }
            else
            {
                aux = seguidora;
                seguidora = seguidora->siguiente;

                anterior->siguiente = seguidora;
                free(aux);
            }
        }

    }

    return lista;
}









