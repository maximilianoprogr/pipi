#include "iostream"
#include "string"

using namespace std;

struct Jugada {
	int id; 		// id de la persona que jugo
	int forma ; 	// jugada que realizo la persona
};


int* lesGane (Jugada p, int &m) {
	int n = 3;
	Jugada *jugadas = new Jugada[n];
	
	Jugada tmp;
	tmp.id = 100; tmp.forma = 1; // Piedra
	jugadas[0] = tmp;
	tmp.id = 200; tmp.forma = 3; // Papel
	jugadas[1] = tmp;
	tmp.id = 300; tmp.forma = 3; // Tijera
	jugadas[2] = tmp;	
	
	int *perdedores = new int[n];
	int count = 0;
	
	for ( int i = 0; i < n; i ++) {
		//cout << "ID = " << jugadas[i].id << " FORMA = " << jugadas[i].forma << "\n";
		int forma_j2 = jugadas[i].forma ;
		if( forma_j2 != p.forma ) {
			if(p.forma == 1 && forma_j2 == 3) {
				perdedores[ count ++ ] = jugadas[i].id;
			} else if(p.forma == 2 && forma_j2 == 1) {
				perdedores[ count ++ ] = jugadas[i].id;
			} else if(p.forma == 3 && forma_j2 == 2) {
				perdedores[ count ++ ] = jugadas[i].id;
			}
		}
	}
	
	m = count ;
	int * resultado = new int[ count ];
	for ( int i = 0; i < count ; i ++) {
		resultado[i] = perdedores[i];
	}
	delete [] jugadas;
	delete [] perdedores;
	return resultado;
}

int main() {
	Jugada yo;
	int *ganados, largo;
	
	yo.id = 000;
	yo.forma = 1;
	
	ganados = lesGane(yo, largo);
	
	for ( int i = 0; i < largo ; i ++) {
		cout << "ID perdedor = " << ganados[i] << "\n";
	}
	
    system("pause");
    return 0;
}

