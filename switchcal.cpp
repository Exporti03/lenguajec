#include <iostream>
using namespace std;

int main() {

    double numero1;
    double numero2;
    char opcion;

    cout << "Ingrese el numero 1: " <<endl;
    cin >> numero1;
    cout << "Ingrese el numero 2: " <<endl;
    cin >> numero2;

    cout << "Elige alguna opcion: +, -, *, /" << endl;
    cin >> opcion;

    switch (opcion){

    case '+':

    cout << "resultado es: " << numero1 + numero2 << endl;

        break;

    case '-':

    cout << "resultado es: " << numero1 - numero2 << endl;

        break;

    case '*':

    cout << "resultado es: " << numero1 * numero2 << endl;

        break;

    case '/':
    if (numero2 != 0){
        cout << "resultado es: " << numero1 / numero2 << endl;
    }
    else{
        cout << "Error division invalida";
    }
    break;

    cout << "resultado es: " << numero1 / numero2 << endl;

        break;
    
    default:
    cout <<"opcion invalida";

        break;
    }

    return 0;
}
