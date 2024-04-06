#include <iostream>

using namespace std;

/*
 * Implementación alternativa
 * ocupo el primer valor del arreglo como denominador
 * y el segundo como numerador
 */

class racional {
private:
    int frac[2];
public:
    // constructor vacío
    racional(){}
    // constructor de un número particular
    racional(int num, int den);
    // permite obtener el numerador del número racional
    int numerador();
    // permite obtener el denominador del número racional
    int denominador();
};

racional::racional(int num, int den) {
    frac[1] = num;
    frac[0] = den;
}
int racional::numerador() {
    return frac[1];
}
int racional::denominador() {
    return frac[0];
}

int main () {
    racional r1(8, 33), r2(9, 13);
    racional r3(
        r1.numerador()*r2.numerador(),
        r1.denominador()*r2.denominador()
    );
    cout << "El número resultante es ";
    cout << r3.numerador() << "/" << r3.denominador() << endl;
    return 0;
}



