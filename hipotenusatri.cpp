#include <iostream>
#include <cmath>

int main() {
    double a, b, c;  

    std::cout << "Ingrese el lado A: ";
    std::cin >> a;
    
    std::cout << "Ingrese el lado B: ";
    std::cin >> b;
    

    
    c = sqrt(pow(a, 2) + pow(b, 2));
    
    std::cout << "C: " << c << std::endl;
    
    return 0;
}