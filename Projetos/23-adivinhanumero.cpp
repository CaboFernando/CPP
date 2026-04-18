#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int numero, adivinhar, tentativas = 0;

    srand(time(NULL)); // Inicializa o gerador de números aleatórios

    numero = rand() % 100 + 1; // Gera um número aleatório entre 1 e 100

    cout << "Bem-vindo ao jogo de adivinhacao!\n" << endl;

    do{
        cout << "Digite seu palpite com um numero entre 1 e 100: ";
        cin >> adivinhar;
        tentativas++;

        if (adivinhar < numero) {
            cout << "O numero e maior." << endl;
        } else if (adivinhar > numero) {
            cout << "O numero e menor." << endl;
        } else {
            cout << "Parabens! Voce acertou o numero em " << tentativas << " tentativas." << endl;
        }
    } while (adivinhar != numero);

    return 0;
}
