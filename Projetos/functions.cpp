#include <iostream>
#include <cmath> // Biblioteca que contém as funções matemáticas
using namespace std;

int main()
{
    double x = 8.14;
    double y = 4;
    double z1, z2, z3, z4, z5, z6, z7, z8;

    z1 = max(x, y); // A função max retorna o maior valor entre x e y
    cout << "O maior valor entre " << x << " e " << y << " e: " << z1 << endl;

    z2 = min(x, y); // A função min retorna o menor valor entre x e y
    cout << "O menor valor entre " << x << " e " << y << " e: " << z2 << endl;

    z3 = pow(x, y); // A função pow retorna o resultado de x elevado a y
    cout << x << " elevado a " << y << " e: " << z3 << endl;

    z4 = sqrt(x); // A função sqrt retorna a raiz quadrada de x
    cout << "A raiz quadrada de " << x << " e: " << z4 << endl;

    z5 = abs(-5); // A função abs retorna o valor absoluto de um número
    cout << "O valor absoluto de -5 e: " << z5 << endl;

    z6 = round(x); // A função round arredonda um número para o inteiro mais próximo
    cout << "O arredondamento de " << x << " e: " << z6 << endl;

    z7 = ceil(x); // A função ceil arredonda um número para o próximo inteiro maior ou igual
    cout << "O arredondamento para cima de " << x << " e: " << z7 << endl;

    z8 = floor(x); // A função floor arredonda um número para o próximo inteiro menor ou igual
    cout << "O arredondamento para baixo de " << x << " e: " << z8 << endl;


    return 0;
}