#include <iostream>
using namespace std;

int main() {
    int suma = 0;
    int numero = 5;
    
    while (numero <= 5) {
        suma += numero;
        numero++;
    }
    cout << "La suma es: " << suma << endl;
    return 0;
}