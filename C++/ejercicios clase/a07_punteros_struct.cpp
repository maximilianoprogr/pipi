#include <iostream>

using namespace std;

int main() {
	/* punteros y struct */
	struct empleado {
		int codigo;
		float sueldo;
	};
	
	empleado *q; /* puntero a una variable de tipo empleado */
	
	empleado emp;
	emp.codigo = 1000;
	emp.sueldo = 2540.87;
	
	q = &emp;
	(*q).codigo++;
	q->codigo++;  /*las dos últimas líneas son equivalentes*/
	cout << "Valor del codigo es igual a " << emp.codigo << "\n";

    return 0;
}

