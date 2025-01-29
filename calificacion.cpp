#include <iostream>
using namespace std;

int main() {
    int nota;
    cout << "Ingresa tu calificacion (0-100): ";
    cin >> nota;

    if (nota < 60) {
        cout << "Reprobado." << endl;
    } 
    else if (nota >= 60 && nota <= 89) {
        cout << "Aprobado." << endl;
    } 
    else if (nota >= 90 && nota <= 100) {
        cout << "¡Excelente!" << endl;
    } 
    else {
        cout << "Nota invalida." << endl;
    }

    return 0;
}
