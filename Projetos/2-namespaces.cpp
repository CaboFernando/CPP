#include <iostream>
using namespace std;

namespace primeiro
{
    int x = 1;
}

namespace segundo
{
    int x = 2;
}

int main()
{
    int x = 0;
    cout << "Valor de x no escopo global: " << x << endl;
    cout << "Valor de x no namespace primeiro: " << primeiro::x << endl;
    cout << "Valor de x no namespace segundo: " << segundo::x << endl;

    return 0;
}