#include <iostream>
using namespace std;

int main() {
    int dia;

    cout << "Ingrese un numero del 1 al 7: ";
    cin >> dia;

    switch (dia) {  
    case 1:         
        cout << "dia Lunes" << endl;
        break;     
    case 2:
        cout << "dia Martes" << endl;
        break;

    case 3:
        cout << "dia Miercoles" << endl;
        break;

    case 4:
        cout << "dia Jueves" << endl;
        break;

    case 5:
        cout << "dia Viernes" << endl;
        break;

    case 6:
        cout << "dia Sabado" << endl;
        break;

    case 7:
        cout << "dia Domingo" << endl;
        break;

    default:
        cout << "Numero invalido" << endl;
        break;
    }

    return 0;
}