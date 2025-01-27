double temp;
char op;

std::cout << "####CONVERSION DE TEMPERATURA####\n";
std::cout << "F = Fahrenheit\n";
std::cout << "C = Celsius\n";
std::cout << "A que unidad te gustaria convertir? ";
std::cin >> op;

switch(op) {
    case 'F':
    case 'f':
        std::cout << "Ingrese temperatura en celsius: ";
        std::cin >> temp;
        
        temp = 1.8 * temp + 32;
        std::cout << "Temperatura es " << temp << " Grados Fahrenheit\n";
        break;
    
    case 'C':
    case 'c':
        std::cout << "Ingrese temperatura en fahrenheit: ";
        std::cin >> temp;
        
        temp = (temp - 32) / 1.8;
        std::cout << "Temperatura es " << temp << " Grados Celsius\n";
        break;

    default:
        std::cout << "Ingrese porfavor F o C\n";
        break;
}

return 0;
   
