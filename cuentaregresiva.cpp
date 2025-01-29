#include <iostream>
using namespace std;

int main() {

    int numero1;
    int numero2;
    int numero3;

    cout << "Ingresa numero 1: ";
    cin >> numero1;

    cout << "Ingresa numero 2: ";
    cin >> numero2;

    cout << "Ingresa numero 3: ";
    cin >> numero3;   

    if ( numero1 > numero2  && numero1 > numero3){

        cout <<"Numero 1 mes mayor";

    }

    else if (numero2 > numero1 && numero2 > numero3){

        cout <<"numero 2 es mayor";

    }
    else{
        cout <<"numero 3 es mayor";
    }

    

    return 0;
}