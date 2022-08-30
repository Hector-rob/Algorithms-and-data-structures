//Act 5.2 - Actividad Integral sobre el uso de códigos hash (Evidencia Competencia)
//Francisco José Ramírez Aldaco A01634262
//Salvador Fernando Camacho Hernandez A01634777
//Hector Robles Villareal A01634105
//Miércoles 1 de diciembre del 2021

#include "Dato.h"
#include "tablaHash.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <algorithm>
 
using namespace std;

int main(){
    HashTable ht(10000);
    vector<Dato> v;  // Vector donde se guardan los datos del archivo .txt
    vector<long long> VectorIps;
    ifstream ifs;
    ifs.open("bitacora.txt");
    string line, ip, temp;
    long long ipNum;
    while(getline(ifs, line)) {
        Dato d = Dato::leerString(line);
        v.push_back(d); //Se leen y se guardan los datos en el vector de Datos
        VectorIps.push_back(d.getIpNum()); //Agrega la ip al vector de IPs
    }
    ifs.close();
    
    for (int i=0; i<v.size(); i++) {
        ht.chain(VectorIps[i], v[i].getResumen());
    }

    ht.displayDetails("1");
    ht.displayDetails("833.12.625.35");
    ht.displayAll();
    return 0;
}