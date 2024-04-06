#include <iostream>

using namespace std;

int main()
{

	/* punteros y variable */
	int *p; /* puntero para apuntar a una variable de tipo entero */
	int i = 7;
	cout << "ANTES (p = &i;). direccion de i=" << &i << " que NO es igual a p=" << p << "\n";
	cout << "ANTES (p = &i;). valor de i=" << i << " que NO es igual a *p=" << *p << "\n";
	cout << "\n";
	p = &i;
	cout << "DESPUES (p = &i;). direccion de i=" << &i << " que es igual a p=" << p << "\n";
	cout << "DESPUES (p = &i;). valor de i=" << i << " que es igual a *p=" << *p << "\n";
	cout << "\n";

	(*p)++; /* es equivalente a *p = *p + 1;  */
	cout << "DESPUES ((*p)++;). direccion de i=" << &i << " que es igual a p=" << p << "\n";
	cout << "DESPUES ((*p)++;). valor de i=" << i << " que es igual a *p=" << *p << "\n";

	return 0;
}
