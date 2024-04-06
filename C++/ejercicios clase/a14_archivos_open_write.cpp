#include <iostream>
#include <fstream>

using namespace std;

int main() {
	/* apertura de archivo de escritura */
	/* stream de archivo */
	fstream fp;
	
	/* asociar stream con archivo de a01_holamundo.cpp */
	fp.open(".\\extra.txt", ios::out);
	
	if( fp.is_open() ){
		cout << "Archivo abierto\n";
		fp << "Hola mundo\n";
		fp << 2024;
	} else {
		cout << "Error al abrir el archivo\n";
		exit(1);			
	}
	fp.close();

    return 0;
}

