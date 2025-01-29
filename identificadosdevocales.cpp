
#include <iostream>
using namespace std;


int main() {

    
    char letra;
    

    cout << "Ingresa una letra: ";
    cin >> letra;


    if ( letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {

    cout << "es una vocal" << endl;    
     
    }


    else{
        cout <<"No es vocal";
    }

    return 0;
}
