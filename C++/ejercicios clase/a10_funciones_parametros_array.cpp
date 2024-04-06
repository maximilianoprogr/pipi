#include <iostream>

using namespace std;

/* calcula promedio de un arreglo */
float calcPromedio(int A[], int n){
    int sum = 0, i;
    for(i=0;i<n;i++)
        sum += A[i];
    return (float)sum/n;
}

int main() {
	/* con arreglos */
	int A[5] = {8, 3, 12, 15, 9};
	int B[10] = {2, 8, 2, 5, 9, 4, 7, 3, 8, 4};
	
	cout << "Promedio arreglo A:" << calcPromedio(A, 5)  << "\n"; 
	cout << "Promedio arreglo B:" << calcPromedio(B, 10) << "\n"; 	

    return 0;
}

