#include <iostream>
using namespace std;

//Pide un número del 1 al 12 e imprime el nombre del mes correspondiente.

int main() {

    int numero;
    string mes;

    cout << "Ingresa un numero del 1 - 12; ";
    cin >> numero;

    if (numero == 1){

        cout << "MES DE ENERO";
    }
    else if (numero == 2){

        cout << "MES DE FEBRERO";

    }
      else if (numero == 3){

        cout << "MES DE MARZO";

    }
    else if (numero == 4){

        cout << "MES DE ABRIL";
    }
    else if (numero == 5){

        cout << "MES DE MAYO";

    }
      else if (numero == 6){

        cout << "MES DE JUNIO";

    }
    else if (numero == 7){

        cout << "MES DE JULIO";

    }
      else if (numero == 8){

        cout << "MES DE AGOSTO";

    }
    else if (numero == 9){

        cout << "MES DE SEPTIEMBRE";
    }
    else if (numero == 10){

        cout << "MES DE OCTUBRE";

    }
      else if (numero == 11){

        cout << "MES DE NOVIEMBRE";

    }
    else if (numero == 12){

        cout << "MES DE DICIEMBRE";

    }
    else {
        cout << "Numero no valido";
    }
    

    return 0;
}