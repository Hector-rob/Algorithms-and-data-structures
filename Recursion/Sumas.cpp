// Act 1.1 - Funciones Iterativas, Recursivas y su análisis de Complejidad
// Héctor Robles Villarreal A01634105
// Lunes 16 de agosto de 2021
#include "Suma.h"
#include <iostream>
using namespace std;

int main(){

    cout << endl;
    cout << "Suma Iterativa (5): " << Suma::sumaIt(5) << " /Costo lineal O(n) " << endl;
    cout << "Suma Recursiva (5): " << Suma::sumaRec(5) << " /Costo lineal O(n)" << endl;
    cout << "Suma Directa (5): " << Suma::sumaDirecta(5) << " /Costo Constante O(1)" <<endl << endl;
    cout << "Suma Iterativa (4): " << Suma::sumaIt(4) << " /Costo lineal O(n) " << endl;
    cout << "Suma Recursiva (4): " << Suma::sumaRec(4) << " /Costo lineal O(n)" << endl;
    cout << "Suma Directa (4): " << Suma::sumaDirecta(4) << " /Costo Constante O(1)" <<endl << endl;
    cout << "Suma Iterativa (3): " << Suma::sumaIt(3) << " /Costo lineal O(n) " << endl;
    cout << "Suma Recursiva (3): " << Suma::sumaRec(3) << " /Costo lineal O(n)" << endl;
    cout << "Suma Directa (3): " << Suma::sumaDirecta(3) << " /Costo Constante O(1)" <<endl << endl;
    cout << "Suma Iterativa (2): " << Suma::sumaIt(2) << " /Costo lineal O(n) " << endl;
    cout << "Suma Recursiva (2): " << Suma::sumaRec(2) << " /Costo lineal O(n)" << endl;
    cout << "Suma Directa (2): " << Suma::sumaDirecta(2) << " /Costo Constante O(1)" <<endl << endl;

    return 0;
}