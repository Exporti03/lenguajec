#include <iostream>

namespace primero {
    int x = 1;
}

namespace segundo {
    int x = 2;
}

int main() {

    using std::cout;
    using std::string;

    using namespace std;

    string nombre = "Alex";

    cout<<"x= "<<primero::x;


    return 0;
}
