#include <iostream>

using namespace std;

int main()
{

	/* struct y variables */
	struct empleado
	{
		int codigo;
		float sueldo;
	};

	/* arreglo y struct */
	empleado lista[10]; /*arreglo de 10 empleados*/
	lista[0].codigo = 1000;
	lista[0].sueldo = 2540.87;
	lista[1].codigo = 1001;
	lista[1].sueldo = 8740.25;

	cout << "La direccion base del arreglo lista es " << lista << "\n";
	for (int i = 0; i < 10; ++i)
	{
		cout << "Direccion de lista[" << i << "] es " << &lista[i] << "- Contenido de lista[" << i << "].codigo es " << lista[i].codigo << "\n";
		cout << "Direccion de lista[" << i << "] es " << &lista[i] << "- Direccion de lista[" << i << "].codigo es " << &lista[i].codigo << "\n";
		cout << "Direccion de lista[" << i << "] es " << &lista[i] << "- Direccion de lista[" << i << "].sueldo es " << &lista[i].sueldo << "\n";
	}
	return 0;
}
