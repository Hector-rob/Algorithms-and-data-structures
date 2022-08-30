//Act 5.1 - Implementación individual de operaciones sobre conjuntos
//Héctor Robles Villarreal A01634105
//Domingo 28 de noviembre de 2021

#include"tabla_hash.h"
#include <utility>
using namespace std;


int main(){
    Hash tablaSC(7);
   
    pair<int, string> par1(76,"Hector");
    pair<int, string> par2(40,"Sebas");
    pair<int, string> par3(48,"Chava");
    pair<int, string> par4(5, "Carlos");
    pair<int, string> par5(20, "Manuel");

    tablaSC.sondeoCuadratico(par1);
    tablaSC.sondeoCuadratico(par2);
    tablaSC.sondeoCuadratico(par3);
    tablaSC.sondeoCuadratico(par4);
    tablaSC.sondeoCuadratico(par5);
    
    Hash::printHashCuadratico(tablaSC);

    Hash tablaChain(10);

    pair<int, string> parc0(0, "Lalo");
    pair<int, string> parc1(1, "Jorge");
    pair<int, string> parc2(2, "Daniel");
    pair<int, string> parc3(3, "Hector");
    pair<int, string> parc4(4, "Chava");
    pair<int, string> parc5(5, "Sebas");
    pair<int, string> parc6(2, "Manuel");
    pair<int, string> parc7(3, "Alex");
    pair<int, string> parc8(4, "Paul");
    pair<int, string> parc9(9, "Iker");
    pair<int, string> parc10(7, "Mateo");

    tablaChain.chain(parc1);
    tablaChain.chain(parc2);
    tablaChain.chain(parc3);
    tablaChain.chain(parc4);
    tablaChain.chain(parc6);
    tablaChain.chain(parc3);
    tablaChain.chain(parc7);
    tablaChain.chain(parc5);
    tablaChain.chain(parc0);
    tablaChain.chain(parc7);
    tablaChain.chain(parc8);
    tablaChain.chain(parc9);
    tablaChain.chain(parc10);
    
    Hash::printChain(tablaChain);
    



    return 0;
}
