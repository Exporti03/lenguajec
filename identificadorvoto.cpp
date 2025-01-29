#include <iostream>
using namespace std;

int main() {
    int edad;
    cout << "Ingresa tu edad: ";
    cin >> edad;

    if (edad <= 0) {
        cout << "Edad no valida" << endl;
    }
    else if (edad >= 18) {
        cout << "Puedes votar" << endl;
    }
    else {
        cout << "No puedes votar" << endl;
    }

    return 0;
}