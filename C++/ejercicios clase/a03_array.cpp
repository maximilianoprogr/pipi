#include <iostream>

using namespace std;

int main() {
	int a[10];
	a[0] = 100;
	a[1] = 100;
	cout << "La direccion base del arreglo A es " << a << "\n";
	for (int i=0; i<10; ++i) {
		cout << "Direccion de a[" << i << "] es " << &a[i] << "- Contenido de a[" << i << "] es " << a[i] << "\n";
	}
    return 0;
}

