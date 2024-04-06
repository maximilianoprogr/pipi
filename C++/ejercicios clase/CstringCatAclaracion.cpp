#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char **argv){
    char texto[5] = "Hola";
    //No se puede, falta espacio para el \0
    //char final[8] = "HolaHola";
    //Si se puede a pesar de no tener \0
    char final[8] = ""; 
    strcat(final, texto);
    cout << final << endl; 
    strcat(final, texto);
    cout << final << endl;
    //Si se le añade más texto, stack smashing 
    strcat(final, texto);
    cout << final << endl; 
}