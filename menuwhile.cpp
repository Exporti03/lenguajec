#include <iostream>
using namespace std;



int main(){

    int opcion;

    while (true) {

        cout << "\nMenu:\n1. Saludar:\n2. Depedir:\n3. Salir:\nelige: " << endl;

        cin >> opcion;

        if (opcion == 3) break;

        switch (opcion)
        {
        case 1: cout << "Hola Chico\n"; break;

        case 2: cout << "Chao muchacho\n"; break;
        
        default:
        cout << "Opcion invalida";

            break;
        }

     
        

    }
        
    
    return 0;
}