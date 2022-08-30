
#include <iostream>
#include <vector>

using namespace std;



void printMatriz(int v, int matriz[][100], vector<int> listaAdy[]) {
   int i, j;
   cout << "\nMatriz de Adyacencia del Grafo: \n" << endl;
   for(i = 0; i < v; i++) {
      for(j = 0; j < v; j++) {
         cout << matriz[i][j] << " ";
      }
      cout << endl;
   }
   for (int h = 0; h < v; ++h){
        cout << "\nLista de Adyacencia del vertice " << h << "\nVertice " <<h;
        for (auto x : listaAdy[h])
           cout << " -> " << "Vertice " << x;
        printf("\n");
    }
}

void printListaAdy(int v, vector<int> listaAdy[]){
     for (int h = 0; h < v; ++h){
        cout << "\n Lista de Adyacencia del vertice " << h << "\n head ";
        for (auto x : listaAdy[h])
           cout << "-> " << x;
        printf("\n");
    }
}
void agregarArco(int verticeFuente, int verticeDestino, int matriz[][100], vector<int> listaAdy[]) {
    matriz[verticeFuente][verticeDestino] = matriz[verticeDestino][verticeFuente] = 1;
    listaAdy[verticeFuente].push_back(verticeDestino);
    listaAdy[verticeDestino].push_back(verticeFuente);




}
int main() {
    int vertices = 6;
    int matrizAdy[100][100];
    vector<int> listaAdy[vertices];
    //cout << "Ingresa el numero de vertices: " << endl;
    //cin >>  vertices;
    //cout << "Ingresa el numero de arcos: "<< endl;
    //cin >> arcos;
    //cout<<"Adjacency Matrix for Undirected Graph \n"; //PONER COMPLEJIDAD
    //for(int i=0; i< arcos;i++){
    //    cout << "¿Que vertice quieres conectar? " <<endl;
    //    cin>>j; 
    //    cout<< "¿Con cual vertice lo quieres conectar? " << endl;
    //    cin>>k;
    //    agregarAMatriz(j,k,matrizAdy,listaAdy);    
    //}
    vertices = 5;
    agregarArco(0,1,matrizAdy,listaAdy);
    agregarArco(0,4,matrizAdy,listaAdy);
    agregarArco(1,2,matrizAdy,listaAdy);
    agregarArco(1,3,matrizAdy,listaAdy);
    agregarArco(1,4,matrizAdy,listaAdy);
    agregarArco(2,4,matrizAdy,listaAdy);
    agregarArco(2,3,matrizAdy,listaAdy);
    agregarArco(4,3,matrizAdy,listaAdy);


    

    printMatriz(vertices,matrizAdy,listaAdy);
    //printListaAdy(vertices,listaAdy);
   return 0;
}

///PONER COMPLEJIDAD DE CADA UNA