#include <iostream>
using namespace std;

int main() {
    int mes;

    cout <<"Ingrese numeros del 1  al 12: " << endl;
    cin >> mes;

    switch (mes){
    
    case 12: case 1: case 2:
        cout << "Invierno" << endl;
        break;
    

    
    case 3: case 4: case 5:
        cout << "Primavera" << endl;
        break;
    

    
    case 6: case 7: case 8:
        cout << "verano" << endl;
        break;
    

    
    case 9: case 10: case 11:
        cout << "Otoño" << endl;
        break;
    

    default:

    cout << "Numero errado";

    }
    

    return 0;
}