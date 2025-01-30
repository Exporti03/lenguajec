#include <iostream>
using namespace std;

int main() {
    int mes;

    cout <<"Ingrese numeros del 1  al 12: " << endl;
    cin >> mes;

    switch (mes){
    
    case 1:
        cout << "Mes de Enero" << endl;
        break;
    

    
    case 2:
        cout << "Mes de Febrero" << endl;
        break;
    

    
    case 3:
        cout << "Mes de Marzo" << endl;
        break;
    

    
    case 4:
        cout << "Mes de Abril" << endl;
        break;
    

    
    case 5:
        cout << "Mes de Mayo" << endl;
        break;
    

    
    case 6:
        cout << "Mes de Junio" << endl;
        break;
    

    case 7:
        cout << "Mes de Julio" << endl;
        break;
    

    
    case 8:
        cout << "Mes de Agosto" << endl;
        break;
    

    
    case 9:
        cout << "Mes de Septiembre" << endl;
        break;
    

      
    case 10:
        cout << "Mes de Octubre" << endl;
        break;
    

      
    case 11:
        cout << "Mes de noviembre" << endl;
        break;
    

      
    case 12:
        cout << "Mes de Diciembre" << endl;
        break;
    
    default:

    cout << "Numero errado";

    }
    

    return 0;
}