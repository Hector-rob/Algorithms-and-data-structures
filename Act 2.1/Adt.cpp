//Act 2.1 Implementación de un ADT de estructura de datos lineales 
//Hector Robles Villareal A01634105
//Lunes 27 de septiembre del 2021

#include <iostream>
#include "FLinked.h"
using namespace std;

int main()
{
    //La complejidad de las 4 funciones es de O(n)
    FLinked<int> list;
    //Se añade el 0
    list.create(0,0);
    list.create(1,1); //Se añade el 1
    list.create(2,2); //Se añade el 2
    list.create(3,3); //Se añade el 3
    list.create(4,4); //Se añade el 4
    cout <<endl;
    cout << "Se crea una lista con 5 números: " << endl;
    cout << list.read(0) <<", "; 
    cout << list.read(1) <<", "; 
    cout << list.read(2) <<", "; 
    cout << list.read(3) <<", "; 
    cout << list.read(4) <<endl<<endl; 
    list.del(4); //Se borra el numero en la posición 4
    cout << "Se borra el numero en la posición 4" << endl;
    cout << list.read(0) <<", "; 
    cout << list.read(1) << ", ";
    cout << list.read(2) <<", "; 
    cout << list.read(3) << endl<<endl;
    list.del(0); //Se borra el numero en la posición 0
    cout << "Se borra el numero en la posición 0" << endl;
    cout << list.read(0) <<", "; 
    cout << list.read(1) << ", ";
    cout << list.read(2) <<endl<<endl;
    list.del(1); //Se borra el numero en la posición 1
    cout << "Se borra el numero en la posición 1" << endl;
    cout << list.read(0) <<", "; 
    cout << list.read(1) << endl<<endl;
    list.update(0,80); //Se cambia el número en la posición 0
    list.update(1,81); //Se cambia el número en la posición 1
     cout << "Se cambian los números en la posición 0 y 1" <<endl;
    cout << list.read(0) <<", "; 
    cout << list.read(1) << endl<<endl;
    list.create(2,82); 
    list.create(3,84);
    list.create(4,85);
    list.create(5,86);
    cout << "Se agregan varios números" <<endl;
    cout << list.read(0) <<", "; 
    cout << list.read(1) << ", ";
    cout << list.read(2) <<", "; 
    cout << list.read(3) << ", ";
    cout << list.read(4) << ", ";
    cout << list.read(5) <<endl<<endl; 
    list.create(3,88); //Se inserta un número en medio de la lista
    cout<< "Se inserta el 88 en medio de la lista" <<endl;
    cout << list.read(0) <<", "; 
    cout << list.read(1) << ", ";
    cout << list.read(2) <<", "; 
    cout << list.read(3) << ", ";
    cout << list.read(4) << ", ";
    cout << list.read(5) << ", ";
    cout << list.read(6) <<endl<<endl; 
    list.update(3,83); //Se actualiza el número recién insertado
    cout <<"El 88 se actualiza a 83" <<endl;
    cout << list.read(0) <<", "; 
    cout << list.read(1) << ", ";
    cout << list.read(2) <<", "; 
    cout << list.read(3) << ", ";
    cout << list.read(4) << ", ";
    cout << list.read(5) << ", ";
    cout << list.read(6) <<endl<<endl; 
    list.del(0);
    list.del(5);
    list.del(3);
    list.del(2);
    list.del(0);
    cout <<"Se borran casi todos los números de la lista" <<endl;
    cout << list.read(0) <<", "; 
    cout << list.read(1) <<endl<<endl; 
    cout << "La complejidad de estos 4 métodos es de O(n)" << endl;
    
    return 0;
}

