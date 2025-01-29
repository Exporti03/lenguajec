#include <iostream>

//cout <<(operar de mostrar pantalla)
//cin >> (operador de insertar texto)
int main() {

std::string nombre;
int edad;

std:: cout <<"Cual es su nombre? ";
std::cin >> nombre;


std:: cout <<"Cual es su edad? ";
std::cin >> edad;

std::cout << "Hola " << nombre << '\n';
std::cout << "Tu edad es "<<edad;

    return 0;
}