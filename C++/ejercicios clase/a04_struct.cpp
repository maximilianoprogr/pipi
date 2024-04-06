#include <iostream>

using namespace std;

int main() {
	
	/* struct y variables */
	struct empleado {
		int codigo;
		float sueldo;
		bool casado;
	};
	
	empleado emp, emp2;

	//emp.codigo = 1500;
	//emp.sueldo = 2540.87;
	//semp.casado = false;
	
	cout << "Direccion base de emp:" << &emp << "\n";
	cout << "Direccion del campo emp.codigo:" << &emp.codigo << "\n";
	cout << "Direccion del campo emp.sueldo:" << &emp.sueldo << "\n";
	
    return 0;
}

