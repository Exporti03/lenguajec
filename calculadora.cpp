#include <iostream>

int main() {
    char op;
    double numero1;
    double numero2;
    double resultado;

    std::cout << "########## CALCULADORA ##########\n";

    std::cout << "Ingrese + - * /: ";
    std::cin >> op;
    
    std::cout << "Ingrese numero 1: ";
    std::cin >> numero1;

    std::cout << "Ingrese numero 2: ";
    std::cin >> numero2;

    switch (op) {
        case '+':
            resultado = numero1 + numero2;
            std::cout << "Resultado de la suma es: " << resultado << "\n";
            break;

        case '-':
            resultado = numero1 - numero2;
            std::cout << "Resultado de la resta es: " << resultado << "\n";
            break;

        case '*':
            resultado = numero1 * numero2;
            std::cout << "Resultado de la multiplicacion es: " << resultado << "\n";
            break;

        case '/':
            if (numero2 == 0) {
                std::cout << "Error: No se puede dividir entre cero\n";
            } else {
                resultado = numero1 / numero2;
                std::cout << "Resultado de la division es: " << resultado << "\n";
            }
            break;
            
        default:
            std::cout << "Opcion no valida\n";
    }

    return 0;
}
