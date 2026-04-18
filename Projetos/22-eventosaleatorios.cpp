#include <iostream>
#include <ctime>
using namespace std;

int main ()
{
    srand(time(0)); // Semente para gerar números aleatórios diferentes a cada execução

    int numeroAleatorio = rand() % 5 + 1; // Gera um número aleatório entre 1 e 5
    
    switch (numeroAleatorio)
    {
        case 1: cout << "Evento 1 ocorreu!" << endl; break;
        case 2: cout << "Evento 2 ocorreu!" << endl; break;
        case 3: cout << "Evento 3 ocorreu!" << endl; break;
        case 4: cout << "Evento 4 ocorreu!" << endl; break;
        case 5: cout << "Evento 5 ocorreu!" << endl; break;
    }

    return 0;
}