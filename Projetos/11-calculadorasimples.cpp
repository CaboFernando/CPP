#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    char operacao;
    double num1, num2;
    double resultado;

    cout << "########## CALCULADORA SIMPLES ##########" << endl;

    cout << "Digite a operacao (+, -, *, /): ";
    cin >> operacao;
    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;

    switch (operacao)
    {   
        case '+':
            resultado = num1 + num2;
            cout << "Resultado: " << resultado << endl;
            break;
        case '-':
            resultado = num1 - num2;
            cout << "Resultado: " << resultado << endl;
            break;
        case '*':
            resultado = num1 * num2;
            cout << "Resultado: " << resultado << endl;
            break;
        case '/':
            if (num2 == 0)
            {
                cout << "Erro: Divisao por zero!" << endl;
                break;
            }
            resultado = num1 / num2;
            cout << "Resultado: " << resultado << endl;
            break;
        default:
            cout << "Operacao invalida!" << endl;
            break;
    }

    cout << "#########################################";

    return 0;
}