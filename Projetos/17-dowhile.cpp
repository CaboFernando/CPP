#include <iostream>
using namespace std;

int main()
{
    int numero;

    while(numero < 0) // O loop while verifica a condição antes de executar o bloco de código
    {
        cout << "Digite um numero positivo: ";
        cin >> numero;
    };

    do // O loop do-while executa o bloco de código pelo menos uma vez, e depois verifica a condição
    {
        cout << "Digite um numero positivo: ";
        cin >> numero;
    } 
    while(numero < 0);    

    cout << "O numero digitado foi: " << numero << endl;

    return 0;
}