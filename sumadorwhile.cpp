#include <iostream>
using namespace std;

int main() {
    int n, suma = 0, i = 1;
    cout << "Ingresa un numero: ";
    cin >> n;

    while (i <= n) {
        suma += i;
        i++;
    }
    cout << "La suma es: " << suma;
    return 0;
}