#include <iostream>

using namespace std;

class Auto{
private:
    int velAct;
    float cantGas;
    bool motEnc;
    int cambAct;
public:    
    Auto() {motEnc=false; velAct=0; cantGas=0.0; cambAct=0;};
    ~Auto(){}
    void arrancar();    
    void acelerar();
    void frenar();
    bool tieneGas();
    void cargarGas(float cant);
    void subirCambio();
    void bajarCambio();
    void neutro();
    int getVelAct(); //Función para obtener la velocidad actual
};

void Auto::arrancar() {
    motEnc = true; velAct = 0;
}
void Auto::acelerar() {
    velAct++;
    cantGas -= 0.5; //Modificación para agotar la bencina
}
void Auto::frenar() {velAct--;}
bool Auto::tieneGas() {return cantGas > 0.0;}
void Auto::cargarGas(float cant) {cantGas += cant;}
void Auto::subirCambio() {cambAct++;}
void Auto::bajarCambio() {cambAct--;}
void Auto::neutro() {cambAct=0;}
int Auto::getVelAct() {return velAct;}

int main(int argc, char **argv) {
    Auto A1; // invoca automáticamente al constructor
    /*
     *Acciones que no se pueden hacer
     *cout << A1.velAct << endl;
     *A1.velAct++;
     */
    A1.arrancar();
    A1.cargarGas(50.0);
    while (A1.tieneGas()) {
        A1.acelerar();
        cout << A1.getVelAct() << endl;
        /* ... */
    }
}