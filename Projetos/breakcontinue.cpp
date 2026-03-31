#include <iostream>
using namespace std;

int main()
{
    // Break é usado para sair de um loop
    for (int i = 0; i < 10; i++)
    {
        if(i == 5)
            break; // Sai do loop quando i for igual a 5

        cout << "Valor de i: " << i << endl;
    }
    
    // Continue é usado para pular a iteração atual e continuar com a próxima
    for (int j = 0; j < 10; j++)
    {
        if(j % 2 == 0)
            continue; // Pula a iteração atual se j for par

        cout << "Valor de j: " << j << endl;
    }

    return 0;
}