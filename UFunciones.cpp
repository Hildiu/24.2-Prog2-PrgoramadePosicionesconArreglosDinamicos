//
// Created by mbermejo on 19/09/2024.
//

#include "UFunciones.h"


int * dimensionarArreglo(int tam)
{
   return new int[tam];
}


void llenarArreglo( int  *pArreglo, int tam)
{
   for(int indice=0; indice<tam; indice++)
       pArreglo[indice] = rand() % 20 + 1;
}

void imprimirArreglo(int *pArreglo,int tam)
{
  for(int indice=0; indice<tam; indice++)
      cout << setw(6) << pArreglo[indice];
}


int   buscar(int dato, int *pArreglo, int tam)
{
  int contador=0;
  for(int i=0; i<tam; i++)
      if(dato == pArreglo[i])
          contador++;
  return contador;
}


void llenarPosiciones(int dato, int *pAdePosiciones, int *pArreglo, int tam)
{
   int posiciones = 0;

   for(int i=0; i<tam; i++)
       if( dato == pArreglo[i]) {
           pAdePosiciones[posiciones] = i;
           posiciones++;
       }
}