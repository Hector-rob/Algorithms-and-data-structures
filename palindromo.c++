#include <iostream>
#include <string>

using namespace std;

int main(){
    string palindromo;
    cout <<"Ingresa la palabra" << endl;
    cin >> palindromo;
   
    if (palindromo == string(palindromo.rbegin(), palindromo.rend())) {
        cout << "Es un palindromo" << endl;
    } else {
        cout << "No es un palindromo" << endl;
    }
    return 0;
}
