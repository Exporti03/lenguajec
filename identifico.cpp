#include <iostream>
using namespace std;

int main() {
    string usuario, password;
    const string USUARIO_CORRECTO = "adm";    
    const string PASSWORD_CORRECTO = "1234";

    cout << "Ingrese usuario: ";  
    cin >> usuario;

    cout << "Ingrese password: "; 
    cin >> password;

    if (usuario == USUARIO_CORRECTO && password == PASSWORD_CORRECTO) {
        cout << "Inicio de sesion exitoso" << endl;
    }
    else {
        cout << "Usuario o password incorrecto" << endl;
    }

    return 0;
}