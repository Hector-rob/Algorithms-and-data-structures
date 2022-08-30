#include <iostream>
#include "Orden.h"
#include "search.h"
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
         
    Orden::ordIntercambio(vInter);
    cout << "Intercambio: " ;
    imprimeVec(vInter);
    Orden::burbujaVec(vBurbuja);
    cout << "Burbuja: ";
    imprimeVec(vBurbuja);
   





    
  

}

