#include <iostream>
using namespace std;

void fornoPizza()
{   
    cout << "Assando pizza!" << endl;
}

void fornoPizza(string ingrediente)
{   
    cout << "Assando pizza de " << ingrediente << "!" << endl;
}

void fornoPizza(string ingrediente1, string ingrediente2)
{   
    cout << "Assando pizza de " << ingrediente1 << " e " << ingrediente2 << "!" << endl;
}

int main()
{
    fornoPizza();
    fornoPizza("mussarela");
    fornoPizza("mussarela", "pepperoni");

    return 0;
}