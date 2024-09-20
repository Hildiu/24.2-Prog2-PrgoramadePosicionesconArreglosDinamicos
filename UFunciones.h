//
// Created by mbermejo on 19/09/2024.
//

#ifndef INC_02_PROYECTO_UFUNCIONES_H
#define INC_02_PROYECTO_UFUNCIONES_H


#include <iostream>
#include <iomanip>
using namespace std;

int * dimensionarArreglo(int tam);
void llenarArreglo( int  *pArreglo, int tam);
void imprimirArreglo(int *pArreglo,int tam);
int   buscar(int dato, int *pArreglo, int tam);
void llenarPosiciones(int dato, int *pAdePosiciones, int *pArreglo, int tam);

#endif //INC_02_PROYECTO_UFUNCIONES_H
