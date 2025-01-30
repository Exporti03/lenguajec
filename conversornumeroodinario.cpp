#include <iostream>
using namespace std;

int main(){

    int numero;

    cout <<"Ingresa numero(1-12): " << endl;
    cin >> numero;

    switch (numero){

    case 1: cout << "Numero 1st"; break;
    case 2: cout << "Numero 2st"; break;
    case 3: cout << "Numero 3st"; break;
    case 4: cout << "Numero 4st"; break;
    case 5: cout << "Numero 5st"; break;
    case 6: cout << "Numero 6st"; break;
    case 7: cout << "Numero 7st"; break;
    default:
    cout << "Numero no valido";

    }

    return 0;
}
