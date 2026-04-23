#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;

    cout << "Digite o valor do lado A do triangulo: ";
    cin >> a;
    cout << "Digite o valor do lado B do triangulo: ";
    cin >> b;
    
    c = sqrt(pow(a, 2) + pow(b, 2)); // Calcula a hipotenusa usando o teorema de Pitágoras: c = √(a² + b²)
    cout << "O valor da hipotenusa usando o teorema de Pitagoras e: " << c << endl;

    return 0;
}