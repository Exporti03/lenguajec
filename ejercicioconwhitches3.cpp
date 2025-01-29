#include <iostream>
using namespace std;

int main() {
    double temp;
    char op;

    cout << "####CONVERSION DE TEMPERATURA####\n";
    cout << "F = Fahrenheit\n";
    cout << "C = Celsius\n";
    cout << "A que unidad te gustaria convertir? ";
    cin >> op;

    switch(op) {
        case 'F':
        case 'f':
            cout << "Ingrese temperatura en celsius: ";
            cin >> temp;
            
            temp = 1.8 * temp + 32;
            cout << "Temperatura es " << temp << " Grados Fahrenheit\n";
            break;
        
        case 'C':
        case 'c':
            cout << "Ingrese temperatura en fahrenheit: ";
            cin >> temp;
            
            temp = (temp - 32) / 1.8;
            cout << "Temperatura es " << temp << " Grados Celsius\n";
            break;

        default:
            cout << "Ingrese porfavor F o C\n";
            break;
    }

    return 0;
}
