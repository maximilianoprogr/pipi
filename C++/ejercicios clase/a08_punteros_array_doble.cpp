#include "iostream"
#include "string"

using namespace std;

int main()
{
    //El número de columnas es fijo (sólo título y autor)
	int cols = 2;
	string titulo ,autor;
	//Si inicializa la matriz (punteros de punteros)
    string** libros; 
	//Se inicializa la variable
    int tamanio = 0; 
	string entrada;
	// Leer la cantidad de libros
    cout << "Cuantos libros desea ingresar?";
	//Se asigna el valor ingresado
    getline(cin, entrada); 
	//Se transforma la entrada en número
    tamanio = stoi(entrada); 
	//Se asigna el número de filas según el usuario (un arreglo de punteros)
    libros = new string*[tamanio]; 

    //Recorro los punteros.
    for (int i = 0; i < tamanio; ++i) {
        cout << "Dirección de libros[" << i << "] = " << libros[i] << "\n"; 
    }
	
    cout << "Por favor ingrese la siguiente información de los Libros: \n";
    for(int i = 0; i < tamanio; i++) {
        //Cada fila contendrá dos columnas
		libros[i] = new string[cols]; 
        //Notar que cols pudo haber sido ingresada por el usuario también

        cout << "\n******* Libro " << i + 1 << "********:\n";
        cout << "Titulo: ";
        getline(cin,titulo);
        cout << "Autor: ";
        getline(cin,autor);
        libros[i][0] = titulo;
        libros[i][1] = autor;
    }

    //despliego datos de libros.
    for (int i = 0; i < tamanio; ++i) {
		for (int j = 0; j < cols; j++) {
			cout << "Libro[" << i << "," << j << "] = " << libros[i][j] << "\n"; 
		}
    }
    //Para liberar la memoria debemos recorrer fila por fila primero.
    for (int i = 0; i < tamanio; ++i) {
        //Cada fila de libros es otro array de punteros
		delete [] libros[i]; 
        //Por eso son punteros a punteros
    }

    //Luego de limpiar las columnas, quitamos la fila única que quedó
    delete [] libros;

    system("pause");
    return 0;
}

