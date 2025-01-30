#include <iostream>
using namespace std;

int main() {
    int opcion;
    cout << "Menu:\n1. Hamburguesa 🍔\n2. Pizza 🍕\n3. Ensalada 🥗\n4. Helado 🍦\nIngresa tu opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1: cout << "Precio: $5.99"; break;
        case 2: cout << "Precio: $8.50"; break;
        case 3: cout << "Precio: $4.99"; break;
        case 4: cout << "Precio: $2.99"; break;
        default: cout << "Opcion invalida";
    }
    return 0;
}
