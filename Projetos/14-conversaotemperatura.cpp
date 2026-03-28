#include <iostream>
using namespace std;

int main()
{
    // Esse programa converte uma temperatura de Celsius para Fahrenheit e vice-versa

    double temperatura, resultado;
    char opcao;

    cout << "***** CONVERSAO DE TEMPERATURA *****" << endl;

    cout << "F = Fahrenheit" << endl;
    cout << "C = Celsius" << endl;
    cout << "Escolha a opcao de conversao (F/C): ";
    cin >> opcao;

    if(opcao == 'F' || opcao == 'f')
    {
        cout << "Informe a temperatura em Celsius: ";
        cin >> temperatura;

        resultado = (temperatura * 1.8) + 32;
        cout << "A conversao de " << temperatura << " Celsius, convertido em Fahrenheit e: " << resultado << " F" << endl;
    }
    else if(opcao == 'C' || opcao == 'c')
    {
        cout << "Informe a temperatura em Fahrenheit: ";
        cin >> temperatura;

        resultado = (temperatura - 32) / 1.8;
        cout << "A conversao de " << temperatura << " Fahrenheit, convertido em Celsius e: " << resultado << " C" << endl;
    }
    else
        cout << "Opcao invalida!" << endl;

    cout << "************************************" << endl;

    return 0;
}