#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingresa un numero positivo: ";
    cin >> n;

    while (n <= 0){
        cout << "envalido escriba un numero positivo: ";
        cin >> n;
    }
    cout << "Numero valido";
    
    return 0;
}