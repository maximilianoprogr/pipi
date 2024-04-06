#include <iostream>

using namespace std;

/* Crea un arreglo de int asignando memoria*/
int* arregloDeNumeros2(int t){
    int *arr = new int[t];
	
    for(int i=0;i<t;i++){
        arr[i] = i;
	}
	return arr;
}

int main() {
	/* problema resuleto de retorno de arreglo */
	int *arreglo, i, cant = 5;
	
	arreglo = arregloDeNumeros2(cant); 
	
	cout << "Arreglo generado \n";
	for (i=0; i < cant; i++) {
		cout << "arreglo[" << i << "] = " << *arreglo << "\n";
		/* apunta al siguiente elemento del arreglo */
		arreglo++; 
	}
	
	delete[] arreglo;	

    return 0;
}

