#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Ingresa tres lados de un triangulo: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        cout << "Es un triangulo valido." << endl;
    } 
    else {
        cout << "No es un triangulo valido." << endl;
    }

    return 0;
}