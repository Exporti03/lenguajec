#include <iostream>

int main() {
    char calificacion;

    std::cout << "Calificacion: ";
    std::cin >> calificacion;

    switch(calificacion) {
        case 'a':
            std::cout << "Lo hizo muy bien";
            break;
        
        case 'b':
            std::cout << "Bueno";
            break;
        
        case 'c':
            std::cout << "Regular";
            break;
        
        case 'd':
            std::cout << "Malo";
            break;
        
        case 'f':
            std::cout << "Muy malo";
            break;

        default:
            std::cout << "Calificacion invalida";
            break;
            
    }

    return 0;
}