#include <iostream>
using namespace std;

int main() {
    int año;
    cout << "Ingresa un año: ";
    cin >> año;

    if ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0)) {
        
        cout << "¡Es bisiesto!" << endl;
    } 
    else {
        cout << "No es bisiesto." << endl;
    }

    return 0;
}