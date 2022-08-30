//Act 5.1 - Implementación individual de operaciones sobre conjuntos
//Héctor Robles Villarreal A01634105
//Domingo 28 de noviembre de 2021

#ifndef HASH_H
#define HASH_H

#include<iostream>
#include<vector>
#include<list>
#include<utility>
#include<string>



struct node{
    std::pair <int, std::string> datos;
    node* sig;
};

node* nodo = NULL;



class Hash{
    public:
    // Constructor
    Hash(int);
    // Función hash
    int hashFunction(int);
    //Funcion para manejo de colisiones por sondeo cuadrático
    void sondeoCuadratico(std::pair<int,std::string>);
    //Función para el manejo de colisiones por encadenamiento
    void chain(std::pair <int, std::string>);
    static void printHashCuadratico(Hash);
    static void printChain(Hash);
    private:
        //Numero de filas que tendrá la tabla hash
        int numFilas;
        //Tabla hash
        std::vector<std::pair<int, std::string> > lista;
        std::vector<bool> banderas;
        std::vector<node*> listaChain;

};

Hash::Hash(int n){ 
    numFilas = n;
    std::pair <int, std::string> par(0," ");
    for (int h = 0; h < numFilas; h++){
        banderas.push_back(false);
        lista.push_back(par);
        nodo = new node();
        nodo->datos = par;
        nodo->sig = NULL;
        listaChain.push_back(nodo);
    }
}

int Hash::hashFunction(int key){
    return (key % numFilas);
}

void Hash::sondeoCuadratico(std::pair<int, std::string> elemento){
    int index = hashFunction(elemento.first);
    if (!banderas[index]){
        lista.at(index) = elemento;
        banderas.at(index) = true;
    }
    //Sondeo Cuadratico /O(n)
    else{
        for (int i = 0; i < numFilas; i++){
            int nuevoIndex = (index + i*i) % numFilas;
            if(!banderas[nuevoIndex]){
                lista.at(nuevoIndex) = elemento;
                banderas.at(nuevoIndex) = true;
                break;
            }
        }
    }
}

void Hash::chain(std::pair <int, std::string>elemento){
    int index = hashFunction(elemento.first);
    if (!banderas[index]){
        nodo = new node();
        nodo->datos = elemento;
        nodo->sig = NULL;
        listaChain.at(index) = nodo;
        banderas.at(index) = true;
    }
    //Encadenamiento por colision /O(n)
    else{
        nodo = new node();
        nodo->datos= elemento;
        nodo->sig = NULL;
        listaChain.at(index)->sig = nodo;
    }

}

void Hash::printChain(Hash tabla){
    std::cout << "\n        TABLA ENCADENAMIENTO POR COLISION" <<std::endl;
    for(int i = 0; i < tabla.numFilas; i++){
        std::cout << "Indice: " << i <<" ";
        std::cout << tabla.listaChain.at(i)->datos.second << " -> " ;
        node* current;
        current = tabla.listaChain.at(i);
        if(current->sig!=NULL){
            while(current->sig!=NULL){
            std::cout << tabla.listaChain.at(i)->sig->datos.second << std::endl;
            current = current->sig;
            }
        }
        else{
            std::cout <<std::endl;
        }
    }
        
}

void Hash::printHashCuadratico(Hash tabla){
    std::cout << "\n        TABLA SONDEO CUADRÁTICO" <<std::endl;
    std::cout << "\n          " << "Llave " << "   Nombre\n" <<std::endl;
    for (int i = 0; i< tabla.numFilas; i++){
        //if(tabla.banderas[i])
            std::cout << "Indice " << i <<":   " << tabla.lista[i].first << "     " << tabla.lista[i].second << std::endl;
    //}
   }
    
}

#endif //HASH_H
