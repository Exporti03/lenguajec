#include <iostream>
using namespace std;

int main() {
    int opcion;

    while (true) {
        cout << "\n--- Menú ---" << endl;
        cout << "1. Saludar" << endl;
        cout << "2. Despedir" << endl;
        cout << "3. Salir" << endl;
        cout << "Elige una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "¡Hola! ¿Cómo estás?" << endl;
                break;
            case 2:
                cout << "¡Adiós! Hasta luego." << endl;
                break;
            case 3:
                cout << "Saliendo del programa..." << endl;
                return 0;
            default:
                cout << "Opción inválida. Intenta de nuevo." << endl;
        }
    }

    return 0;
}
