#include <iostream>
using namespace std;

//cout << (operador de impressão de dados)  
//cin >> (operador de entrada de dados)

int main()
{
    string nome;
    int idade;

    cout << "Digite seu nome completo: ";
    //cin >> nome; // Lê o nome do usuário e armazena na variável 'nome'
    getline(cin, nome); // Lê o nome completo do usuário, incluindo espaços, e armazena na variável 'nome'
    // Caso tenha algum \n no buffer do teclado, o getline irá ler esse \n e não irá esperar o usuário digitar o nome, por isso é necessário usar o cin.ignore() para limpar o buffer do teclado antes de usar o getline.

    cout << "Digite sua idade: ";
    cin >> idade; // Lê a idade do usuário e armazena na variável 'idade'

    cout << "Ola, " << nome << "! Bem-vindo ao C++!" << endl; // Imprime uma mensagem de boas-vindas usando o nome do usuário
    cout << "Voce tem " << idade << " anos." << endl; // Imprime a idade do usuário


    return 0;
}