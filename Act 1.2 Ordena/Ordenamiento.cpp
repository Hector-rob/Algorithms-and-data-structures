// Act 1.2 - Algoritmos de búsqueda y ordenamiento
// Héctor Robles Villarreal A01634105
// Martes 7 de septiembre de 2021

#include "Ordenamiento.h"
#include <iostream>
#include <vector>
using namespace std;

void imprimeVec(std::vector<int> &v){
     for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vInter{8,7,9,10,2};
    vector<int> vBurbuja{40,2,4,3,21};
    vector<int> vMerge{1,2,34,14,21};
    vector<int> vSecuencial{40,2,4,3,21};
    vector<int> vBinaria{40,2,4,3,21};
         
    Ordenamiento::ordIntercambio(vInter);
    cout << "Intercambio: " ;
    imprimeVec(vInter);
    Ordenamiento::burbujaVec(vBurbuja);
    cout << "Burbuja: ";
    imprimeVec(vBurbuja);
    Ordenamiento::mergeSort(vMerge, 0, (sizeof(vMerge) / sizeof(vMerge[0]) - 2));
    cout << "Merge: ";
    imprimeVec(vMerge);
    cout << "Busqueda Secuencial: " << "El número 4 fue encontrado en la posición " << Ordenamiento::busquedaSec(vSecuencial,4) << endl;
    cout << "Búsqueda Binaria: " << "El número 4 fue encontrado en la posición " << Ordenamiento::busquedaBin(vBinaria,4) << endl;

    





    
  

}

