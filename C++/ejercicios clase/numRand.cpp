#include<iostream>

using namespace std;

int main(int argc, char **argv){
    srand(1000); //seed para un comportamiento replicable
    int num; //rand genera un número entre 0 y RAND_MAX
    for (int i = 0; i < 10; i++) {
        num = rand() % 5;
        cout << num << endl;
    }
    return 0;
}