#include <iostream>

using namespace std;

int main() {
	/* punteros y arreglos */
	int *w; /* puntero a una variable de tipo entero */
	int A[10], i;
	
	for (i=0; i < 10; i++) {
		A[i] = i;
	}
	w = A; /* w apunta a la dirección base de A */
	for (i=0; i < 10; i++) {
		cout << *w << " - " << A[i] << " " ;
		w++; /* apunta al siguiente elemento del arreglo */
	}
	cout << endl;

    return 0;
}

