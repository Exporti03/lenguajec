#include <iostream>

int main(){
std::string nombre;

    while (nombre.empty()){
        std::cout << "Ingrese tu nombre: ";
        std::getline(std::cin,nombre);
    }

    std::cout << " Hola " << nombre;
    

    return 0;
}