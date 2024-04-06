#include <iostream>

using namespace std;

/* parametros formales */
void swap(int aa, int bb){
	int tmp = aa;
	aa = bb;
	bb = tmp;
}

/* parametros formales como punteros */
void swap_puntero(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
	return;
}

/* parametros formales como referencia */
void swap_referencia(int& aa, int& bb){
	int tmp = aa;
	aa = bb;
	bb = tmp;
}

int main() {
	
	/* punteros y parametros como puntero y referencia */
	int a = 10;
	int b = 5;
	
	swap(a, b);
	cout << "Post-swap: a = " << a << ", b = " << b << endl;
	
	swap_puntero(&a, &b);
	cout << "Post-swap_puntero: a = " << a << ", b = " << b << endl;
	
	a = 10;
	b = 5;		
	swap_referencia(a, b);
	cout << "Post-swap_referencia: a = " << a << ", b = " << b << endl;		

    return 0;
}

