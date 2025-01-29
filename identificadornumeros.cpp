#include <iostream>
using namespace std;

int main() {
    double numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero < 0) 
    {
        cout << "Este numero es negativo" << endl;
    }
    else if (numero > 0)  
    {
        cout << "Este numero es positivo" << endl;
    }
    else 
    {
        cout << "Este numero es igual a cero" << endl; 
    }

    return 0;
}