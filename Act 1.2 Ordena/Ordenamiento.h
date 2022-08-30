// Act 1.2 - Algoritmos de búsqueda y ordenamiento
// Héctor Robles Villarreal A01634105
// Martes 7 de septiembre de 2021

#ifndef ORDENAMIENTO_H
#define ORDENAMIENTO_H
#include <vector>

class Ordenamiento
{
public:
	static void ordIntercambio(std::vector<int> &);
	static void burbujaVec(std::vector<int> &);
	static void mergeSort(std::vector<int> &, int l, int r);
	static int busquedaSec(std::vector<int> &, int);
	static int busquedaBin(std::vector<int> &, int);

private:
	static void swap(int*, int*);
	static void merge(std::vector<int> &, int, int, int);

};


void Ordenamiento::ordIntercambio(std::vector<int> &v)
{
	int i, j, aux; 
	for (i = 0; i <= v.size() - 2; i++)
		for (j = i + 1; j <= v.size() - 1; j++)
			if (v[i] > v[j])
			{
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
}

void Ordenamiento::burbujaVec(std::vector<int> &theV)
{
	int i, j;
	for (i = 0; i < theV.size() ; i++)

		// Last i elements are already in place  
		for (j = i+1; j < theV.size() ; j++)
			if (theV[i] > theV[j])
				swap(&theV[i], &theV[j]);
}

void Ordenamiento::swap(int* val1, int* val2)
{
	int temp = *val1;
	*val1 = *val2;
	*val2 = temp;
}

void Ordenamiento::mergeSort(std::vector<int> &v, int l, int r)
{
	if (l < r) {
		int m = l + (r - l) / 2;
		mergeSort(v, l, m);
		mergeSort(v, m + 1, r);
		merge(v, l, m, r);
	}
}

void Ordenamiento::merge(std::vector<int> &v, int start, int mid, int end)
{
	int start2 = mid + 1;
	if (v[mid] <= v[start2]) {
		return;
	}
	while (start <= mid && start2 <= end) {
		if (v[start] <= v[start2]) {
			start++;
		}
		else {
			int value = v[start2];
			int index = start2;
			while (index != start) {
				v[index] = v[index - 1];
				index--;
			}
			v[start] = value; 
			start++;
			mid++;
			start2++;
		}
	}
}

int Ordenamiento::busquedaBin(std::vector<int> &v, int clave){
	int central, bajo, alto, valorCentral, n;
	bajo = 0;
	n = v.size();
	alto = n - 1;
	while (bajo <= alto) {
		central = (bajo + alto) / 2;
		valorCentral = v[central];
		if (clave == valorCentral){
			return central;
		}
		else if (clave < valorCentral){
			alto = central - 1;
		}
		else{
			bajo = central + 1;
		}
	}
	return -1;
}

int Ordenamiento::busquedaSec(std::vector<int> &v, int dato){
    for(int i = 0; i < v.size();i++){
        if (v[i] == dato){
            return i;
        }

    }
	return -1;
}

#endif //ORDENAMIENTO_H