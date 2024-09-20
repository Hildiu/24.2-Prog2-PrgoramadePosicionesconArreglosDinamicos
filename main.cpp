/*--------------------------------------------------------------------
 * Dato de Entrada:  tam (int)
 *                   datoABuscar (int)
 * Dato de Salida:   arreglo (int)  es un arreglo dinamico
 *                   veces (int)
 *                   arregloDePosiciones (int) es un arreglo dinamico
 -----------------------------------------------------------------------*/

#include "UFunciones.h"

int main()
{ int tam;
  int  *pArreglo=nullptr;
  int dato;
  int *pAdePosiciones=nullptr;

 srand(time(nullptr));
 cout << "Numero de datos del arreglo: ";
 cin >> tam;
 pArreglo = dimensionarArreglo(tam);
 llenarArreglo(pArreglo, tam);
 imprimirArreglo(pArreglo, tam);
 cout << "\nAhora buscamos un dato en el arreglo\n";
 cout << "Que dato quiere buscar : ";
 cin >> dato;
 int ocurrencias = buscar(dato, pArreglo, tam);
 if( ocurrencias==0)
     cout << "El dato No esta en el arreglo";
 else
 {
   pAdePosiciones = dimensionarArreglo(ocurrencias);
   llenarPosiciones(dato, pAdePosiciones, pArreglo, tam);
   imprimirArreglo(pAdePosiciones,ocurrencias) ;
   delete []pAdePosiciones;
   pAdePosiciones = nullptr;
 }
 delete []pArreglo;
 pArreglo = nullptr;

 return 0;
}
