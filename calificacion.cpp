#include <iostream>
using namespace std;

int main() {

    int calificacion;
    
    cout << "Ingresa la calificacion: ";
    cin >> calificacion;

    

    if ( calificacion >= 90 ){

        cout <<"calificacion excelente";

    }

    else if ( calificacion <= 89 && calificacion >= 60 ){

        cout <<"Calificacion es buena";

    }
    else{
        cout <<"calificacion reprobada";
    }

  return 0;
}
