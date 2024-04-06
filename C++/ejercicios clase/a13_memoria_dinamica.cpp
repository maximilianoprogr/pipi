#include <iostream>

using namespace std;
/* Crea un arreglo de int asignado memoria*/
int* arregloDeNumeros2(int t){
    int *arr = new int[t];
	
    for(int i=0;i<t;i++){
        arr[i] = i;
	}
	return arr;
}
/* Retorna arreglo de numeros pares */
int* numerosPares(int inarr[], int m){
    int count=0, i=0, j=0;
	/* La cantidad de numeros pares */
    for(i=0;i<m;++i)
        if( inarr[i]%2 == 0 )
            count++;
	
	/* Arreglo con especio definido */
    int* outarr = new int[count];
	
	/* Lleno arreglos con nuemros pares */
    for(i=0;i<m;++i)
        if( inarr[i]%2 == 0 )
            outarr[j++] = inarr[i];
    return outarr;
}

int main() {
	/* problema de tamaño de arreglo */
	int *arreglo, *arregloPares, *aux, i, cant = 5;
	
	arreglo = arregloDeNumeros2(cant);
	aux = arreglo;
	
	cout << "Arreglo generado \n";
	for (i=0; i < cant; i++) {
		cout << "arreglo[" << i << "] = " << *arreglo << "\n";
		arreglo++; /* apunta al siguiente elemento del arreglo */
	}
	
	arregloPares = numerosPares(aux, cant);
	cout << "Arreglo de pares \n";
	
	delete[] arreglo;	
	delete[] arregloPares;			

    return 0;
}

