#include <iostream>

int main(){

    int mes;
    std::cout <<"Ingrese un numero de 1-12: ";
    std::cin >> mes;

    switch (mes){
        
        case 1:
        std::cout <<"Es Enero";
        break;

        case 2:
        std::cout <<"Es febrero";
        break;

        case 3:
        std::cout <<"Es Marzo";
        break;

        case 4:
        std::cout <<"Es Abril";
        break;

        case 5:
        std::cout <<"Es Mayo";
        break;

        case 6:
        std::cout <<"Es junio";
        break;

        case 7:
        std::cout <<"Es julio";
        break;

        case 8:
        std::cout <<"Es Agosto";
        break;

        case 9:
        std::cout <<"Es septiembre";
        break;

        case 10:
        std::cout <<"Es octubre";
        break;

        case 11:
        std::cout <<"Es noviembre";
        break;

        case 12:
        std::cout <<"Es diciembre";

        break;

    default:
    std::cout <<"Por favor ingresar numeros del 1 al 12 ";

    }
    return 0;
}