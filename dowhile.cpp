#include <iostream>

int main(){

int numero;

    do{

        std::cout << "Ingrese un numero positivo: ";
        std::cin >> numero;

    }while (numero < 0);

    
    

    return 0;
}