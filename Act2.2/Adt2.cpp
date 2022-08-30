//Act 2.2 Verificación de las funcionalidades de una estructura de datos lineal
//Hector Robles Villareal A01634105
//Miércoles 29 de septiembre del 2021

#include <iostream>
#include "FLinked.h"
using namespace std;

int main()
{
    //La complejidad de las 4 funciones es de O(n)
    FLinked<int> list;
    list.create(0,1); //agregar algo cuando la lista está vacía
    cout << "Se agrega el número 1 en la posición 0:" << endl;
    cout << list.read(0) << endl;
    cout << "Se agrega el número 3 en la posición 1:" << endl;
    list.create(1,3); //agregar algo cuando la lista solo tiene un elemento
    cout << list.read(0)<< " ";
    cout << list.read(1) << endl;
    cout << "Se agrega el número 0 en la posición 0:" << endl;
    list.create(0,0); //se agrega un número en la posición 0 cuando la lista ya tiene más de un elemento
    cout << list.read(0)<< " ";
    cout << list.read(1)<< " ";
    cout << list.read(2) << endl;
    list.create(2,2); //se agrega el número 2 entre el 1 y el 3 en la posición 2
    cout << "Se agrega el número 2 en la posición 2:" << endl;
    cout << list.read(0)<< " ";
    cout << list.read(1)<< " ";
    cout << list.read(2)<< " ";
    cout << list.read(3) << endl;
    cout << "Se agrega el número 4 al final de la lista:" << endl;
    list.create(4,4); // se agrega un número al final cuando la lista ya tiene muchos elementos
    cout << list.read(0)<< " ";
    cout << list.read(1)<< " ";
    cout << list.read(2)<< " ";
    cout << list.read(3)<< " ";
    cout << list.read(4) << endl;
    list.update(0,85); //se actualiza el número en la posición 0 a 85
    cout << "Se actualiza el número en la posición 0 a 85:" << endl;
    cout << list.read(0)<< " ";
    cout << list.read(1)<< " ";
    cout << list.read(2)<< " ";
    cout << list.read(3)<< " ";
    cout << list.read(4) << endl;
    list.update(2,90); //se actualiza el número en la posición 2
    cout << "Se actualiza el número en la posición 2 a 90:" << endl;
    cout << list.read(0)<< " ";
    cout << list.read(1)<< " ";
    cout << list.read(2)<< " ";
    cout << list.read(3)<< " ";
    cout << list.read(4) << endl;
    list.update(4,95); //se actualiza el número en la posición 4
    cout << "Se actualiza el número en la última posición a 95:" << endl;
    cout << list.read(0)<< " ";
    cout << list.read(1)<< " ";
    cout << list.read(2)<< " ";
    cout << list.read(3)<< " ";
    cout << list.read(4) << endl;
    list.del(0);//Se borra el número en la posición 0
    cout << "Se borra el número en la posición 0:" << endl;
    cout << list.read(0)<< " ";
    cout << list.read(1)<< " ";
    cout << list.read(2)<< " ";
    cout << list.read(3) << endl;
    list.del(2); //Borrar antepenúltimo número
    cout << "Se borra el número en la posición 2:" << endl; 
    cout << list.read(0)<< " ";
    cout << list.read(1)<< " ";
    cout << list.read(2) << endl;
    list.del(2); //Borrar último número
    cout << "Se borra el último número:" << endl;
    cout << list.read(0)<< " ";
    cout << list.read(1)<< endl;
    list.create(2,91);
    cout << "Se añade un número al final" << endl;
    cout << list.read(0)<< " ";
    cout << list.read(1)<< " ";
    cout << list.read(2) << endl;
    FLinked<int> list2; //Nueva lista
    cout << "Se añade el 5 a esta nueva lista" << endl;
    list2.create(0,5);
    cout << list2.read(0) << endl;
    cout << "Se actualiza este 5 a 50" << endl;
    list2.update(0,50); //Probar update cuando solo hay un elemento
    cout << list2.read(0) << endl;
    cout << "La complejidad de estos 4 métodos es de O(n)" << endl;

    return 0;
}

