#include <iostream>
using namespace std;

int main() {
    int codigo;
    cout << "Ingresa un codigo HTTP: ";
    cin >> codigo;

    switch (codigo) {
        case 200: cout << "OK "; break;
        case 301: cout << "Movido permanentemente "; break;
        case 404: cout << "No encontrado "; break;
        case 500: cout << "Error interno del servidor "; break;
        case 503: cout << "Servicio no disponible "; break;
        default:  cout << "Codigo desconocido";
    }
    return 0;
}