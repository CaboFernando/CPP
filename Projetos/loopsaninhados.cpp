#include <iostream>
using namespace std;

int main()
{
    // Loops aninhados: um loop dentro do outro
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    int filas;
    int colunas;
    char simbolo;

    cout << "Digite o numero de filas: ";
    cin >> filas;
    cout << "Digite o numero de colunas: ";
    cin >> colunas;
    cout << "Digite o simbolo: ";
    cin >> simbolo;

    for(int x = 1; x <= filas; x++)
    {
        for(int y = 1; y <= colunas; y++)
        {
            cout << simbolo;
        }
        cout << endl;
    }

    return 0;
}