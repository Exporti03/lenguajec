#include <iostream>

int main() {

int edad;

std::cout << "Ingresa tu edad: ";
std::cin >> edad;

if (edad >= 100){
    std::cout <<"posible mente murio";
}

else if(edad < 0) {
    std::cout <<" edad mayor a cero!";
}

else if (edad >= 18){
    std::cout <<"Puedes ingresar a la disco";
}

else {
    std::cout <<"No puedes ingresar a la disco";
}

    return 0;
}