#include <string>
#include <iostream>
using namespace std;


class Busqueda{
    public:
        static string secuencial(string); 
};

string Busqueda::secuencial(string _s){
    for(int i = 0; i < _s.size(); i++)
        if (_s[i] == _s[i+1]){
            i++;
        }
        else{
            char letra = _s[i];
            if(letra == _s[i-1]){
                letra = _s[i+1];
            }
            return (letra + to_string(i));
            break;
            
        }
    }




    
    /*for (int i = 0; i < (_s.size()); i++){
        for (int j = 0; j < (_s.size()); j++){
            char letra = _s[i];
            if (letra == _s[j+1]){
                j+=2;
                break;
            }
            else{
                return letra;
                break;
            }
        }
        
    }
}
*/


