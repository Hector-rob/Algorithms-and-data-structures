//Act 5.2 - Actividad Integral sobre el uso de códigos hash (Evidencia Competencia)
//Francisco José Ramírez Aldaco A01634262
//Salvador Fernando Camacho Hernandez A01634777
//Hector Robles Villareal A01634105
//Miércoles 1 de diciembre del 2021

#ifndef TABLAHASH_H
#define TABLAHASH_H
#include <vector>
#include <string>
using namespace std;
class HashTableEntry {
    public:
        long long key;
        string text;
        HashTableEntry() {
            this->key = -1;
            this->text = "";
        }
        HashTableEntry(long long key, string text) {
            this->key = key;
            this->text = text;
        }
};

class HashTable {
    private:
        int size;
        vector<HashTableEntry>* table;
        vector<char> status;
    public:
        HashTable(int);
        int hashFunc(long long);
        void chain(long long, string);
        void removeVal(long long);
        void displayDetails(string);
        void displayAll();
};

#endif