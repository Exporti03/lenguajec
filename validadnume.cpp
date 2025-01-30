#include <iostream>
using namespace std;

int main() {
    int numero;

    while (true) {
        cout << "Ingresa un número entre 1 y 5: ";
        cin >> numero;

        if (numero >= 1 && numero <= 5) {
            cout << "Número válido: " << numero << endl;
            break; 
        } else {
            cout << "Número inválido. Intenta de nuevo." << endl;
        }
    }

    return 0;
}