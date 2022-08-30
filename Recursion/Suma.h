// Act 1.1 - Funciones Iterativas, Recursivas y su análisis de Complejidad
// Héctor Robles Villarreal A01634105
// Lunes 16 de agosto de 2021

#ifndef SUMA_H
#define SUMA_H

class Suma{
    public:
    static int sumaIt(int);
    static int sumaRec(int);
    static int sumaDirecta(int);
};

int Suma::sumaIt(int n){
    int suma = 0;
    for (int i=0; i <= n; i++){ //O(n)
        suma += i; 
    }
    return suma;
}

int Suma::sumaRec(int n){
    if (n == 0){ //O(1)
        return 0;
    }
    else{
        return n + sumaRec(n-1); //O(n)
    }
}

int Suma::sumaDirecta(int n){
    return float(n * (n+1)/2); //O(1)
}

#endif //SUMA_H
