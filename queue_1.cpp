#include <iostream>
#include <queue>
using namespace std;

void show(queue <int> gq){  // guardar cadenas, otras clases, floats etc
   queue <int> g = gq;
   while (!g.empty()){
       cout << '\t' << g.front();
       g.pop();
   }
   cout << '\n';
}

int main(){
    queue <int> ghector;
    ghector.push(10); //push mete    pop saca
    ghector.push(20);
    ghector.push(30);
    ghector.push(40);

    cout << ghector.size() << endl;

    show(ghector);
}


