#include <iostream>

int main(){

// && = Comprueba si dos codiciones son verdaderas
// || = comprueba si al menor una de dos codiciones es verdadera
// ! = Invierte el estado logico de una operacion


bool soleado = true;

if (!soleado){
    std::cout << "El dia esta nublado";   
}

else {
    std::cout << "El dia esta soleado";
}



//if (temp > 0 && temp < 30) {
   // std::cout << "La temperatura buena";
//}

//else{
    //std::cout << "Temperatura es mala";



    return 0;
}