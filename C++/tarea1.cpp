#include <iostream>
using namespace std;

void swap_puntero(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
	return;
    }
    
int main() {
	



    




    struct Pieza {
        char simbolo; // Define qué tipo de pieza es y su caracter
        int x, y;
        // Su posición dentro del tablero [0, 7] x [0, 7]
    };

    struct Tablero {
        Pieza* piezas_tablero; // Lista de piezas que tiene el tablero
        
		int codigo;
		float sueldo;
	};


    return 0;
    };
