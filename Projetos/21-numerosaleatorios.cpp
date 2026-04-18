#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL)); // Inicializa a semente do gerador de números aleatórios com o tempo atual

    int num = rand() % 6 + 1; // Gera um número aleatório entre 1 e 6
    cout << "Numero aleatorio: " << num << endl;

    return 0;
}