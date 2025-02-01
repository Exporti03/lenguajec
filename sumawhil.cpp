#include <iostream>
using namespace std;

int main() {
    int suma = 0;
    int numero = 1;
    
    while (numero <= 10) {
        suma += numero;
        numero++;
    }
    cout << "La suma es: " << suma << endl;
    return 0;
}