#include <iostream>

//Conversiondetipos

int main() {

    //char x = 100;
    //std::cout << 100;
    int pcorrectas = 8;
    int totalcorrectas = 10;

    double porcentaje = pcorrectas / (double)totalcorrectas * 100;

    std::cout<<porcentaje << "%";

    
    return 0;
}