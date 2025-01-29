#include <iostream>

int main() {
    
    double temp;
    char op;

    std::cout << "####CONVERSION DE TEMPERATURA####\n";
    std::cout << "F = Faahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "A que unidad te gustaria convertir? ";
    std::cin >> op;

    if(op == 'F'|| op == 'f'){
        std::cout << "Ingrese temperatura en celsius: ";
        std::cin >> temp;

        temp = 1.8 * temp + 32;
        std::cout << "Temperatura es " << temp << "Grados Fahrenheit\n";
    }
    else if(op == 'C'|| op == 'c'){
        std::cout << "Ingrese temperatura en celsius; ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "Temperatura es " << temp << "Grados Celsius\n";
    }

    else{
        std::cout << "Ingrese porfavor F o C\n";
    }

    return 0;

    }

   
