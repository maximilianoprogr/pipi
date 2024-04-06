#include <iostream>

using namespace std;

/* Crea un arreglo de int */
int* arregloDeNumeros(int t){
    int arr[t];
	
    for(int i=0;i<t;i++){
        arr[i] = i;
	}
	return arr;
}

int main() {
	/* problema de retorno de arreglo */
	int *arreglo, i, cant = 5;
	
	arreglo = arregloDeNumeros(cant);
	
	cout << "Arreglo generado \n";
	for (i=0; i < cant; i++) {
		cout << "arreglo[" << i << "] = " << *arreglo << "\n";
		/* apunta al siguiente elemento del arreglo */
		arreglo++; 
	}

    return 0;
}

