#include "iostream"
#include "string"

using namespace std;

struct Persona {
   string nombre;
   string apellidoUno;
   string apellidoDos;
   int    numeroCI;
   char   dvCI;
   int    genero;
   int    anioFN;
   int    mesFN;
   int    diaFN;
   int    edad;
   float  imc; 
   float  peso;
   float  altura;	
};

Persona leerPersona(int i) {
	string entrada;
	Persona pp; 
	cout << "Persona[" << i << "]\n ";

	cout << "Nombre: ";
	getline(cin,pp.nombre);
	cout << "Primer Apellido: ";
	getline(cin,pp.apellidoUno);
	cout << "Segundo Apellido: ";
	getline(cin,pp.apellidoDos);	
	
	cout << "Numero cedula de identidad: ";
	getline(cin,entrada);
	pp.numeroCI = stoi(entrada);
	cout << "Digito verificador cedula de identidad: ";
	getline(cin,entrada);
	pp.dvCI = entrada[0];
	
	cout << "Genero: ";
	getline(cin,entrada);
	pp.genero = entrada[0];
	
	cout << "Anio(F.N.): ";
	getline(cin,entrada);
	pp.anioFN = stoi(entrada);
	cout << "Mes (F.N.): ";
	getline(cin,entrada);
	pp.mesFN = stoi(entrada);
	cout << "Dia (F.N.): ";
	getline(cin,entrada);
	pp.diaFN = stoi(entrada);
	
	cout << "Peso: ";
	getline(cin,entrada);
	pp.anioFN = stof(entrada);
	cout << "Estatura: ";
	getline(cin,entrada);
	pp.mesFN = stof(entrada);
	
	return pp;	
};

int calcularEdad(int aa, int mm, int dd);
float calcularIMC( float pe, float al) {
	return (pe / (al * al));
};

void imprimirIMC(float imc);
void imprimirPersona(Persona p) {	
	cout << "---\n";
	cout << "Nombre completo: " << p.nombre << " " << p.apellidoUno << " " << p.apellidoDos << "\n ";
	cout << "Cedula de identidad: " << p.numeroCI << "-" << p.dvCI << "\n ";
	cout << "Genero: " << p.genero << "\n ";
	cout << "Fecha nacimiento (aaaa/mm/dd): " << p.anioFN << "/" << p.mesFN << "/" << p.diaFN << "\n ";
	cout << "---\n";
};

int main()
{
	Persona persona;
	string entrada;
	int n;
	
	// Leer la cantidad de personas
    cout << "Cuantas personas desea ingresar?";
	//Se asigna el valor ingresado
    getline(cin, entrada); 
	//Se transforma la entrada en número
    n = stoi(entrada); 
	//Se asigna el número de filas según el usuario (un arreglo de punteros)
    Persona *personas = new Persona[n]; 

    for(int i = 0; i < n; i++) {
        // Leer datos de persona
		personas[i] = leerPersona(i);
		
		// Calcular edad
		
		// Calcular IMC

    }
	
    for(int i = 0; i < n; i++) {
		imprimirPersona(personas[i]);
    }	
    //Luego de limpiar las columnas, quitamos la fila única que quedó
    delete [] personas;

    system("pause");
    return 0;
}

