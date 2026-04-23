#include <iostream>
#include <ctime>
using namespace std;

char selecioneJogador()
{
    char jogador;

    cout << "*********************************" << endl;    
    cout << "Pedra - Papel - Tesoura | Jogador" << endl;
    cout << "*********************************" << endl;

    do {
        cout << "1 - Pedra" << endl;
        cout << "2 - Papel" << endl;
        cout << "3 - Tesoura" << endl;
        cin >> jogador;
    } while (jogador != '1' && jogador != '2' && jogador != '3');
    
    return jogador;
}

char selecioneComputador()
{
    srand(time(0));
    return (rand() % 3) + '1'; // Gera um número aleatório entre 1 e 3, convertendo para caractere
}

void mostrarSelecoes(char selecao)
{
    switch (selecao)
    {
        case '1':
            cout << "Pedra" << endl;
            break;
        case '2':
            cout << "Papel" << endl;
            break;
        case '3':
            cout << "Tesoura" << endl;
            break;
        default:
            cout << "Seleção inválida" << endl;
            break;
    }
}

void elegerVencedor(char jogador, char computador)
{
    switch(jogador){
        case '1':
            if(computador == '1')
                cout << "Empate!" << endl;
            else if(computador == '2')
                cout << "Computador venceu!" << endl;
            else
                cout << "Jogador venceu!" << endl;
            break;
        case '2':
            if(computador == '2')
                cout << "Empate!" << endl;
            else if(computador == '3')
                cout << "Computador venceu!" << endl;
            else
                cout << "Jogador venceu!" << endl;
            break;
        case '3':
            if(computador == '3')
                cout << "Empate!" << endl;
            else if(computador == '1')
                cout << "Computador venceu!" << endl;
            else
                cout << "Jogador venceu!" << endl;
            break;
    }
}

int main()
{
    char jogador = selecioneJogador();
    cout << "Jogador selecionou: ";
    mostrarSelecoes(jogador);

    char computador = selecioneComputador();
    cout << "Computador selecionou: ";
    mostrarSelecoes(computador);

    elegerVencedor(jogador, computador);

    return 0;
}