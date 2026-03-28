#include <iostream>
using namespace std;

int main()
{
    string nome;
    cout << "Digite seu nome: ";
    cin >> nome;

    cout << "Seu nome contem " << nome.length() << " caracteres" << endl; // Retorna o número de caracteres da string

    cout << "Seu nome contem " << nome.size() << " caracteres" << endl; // Retorna o número de caracteres da string (mesma função que length())

    nome.empty() ? cout << "Seu nome esta vazio " : cout << "Seu nome nao esta vazio" << endl; // Retorna true se a string estiver vazia, caso contrário, retorna false

    nome.clear(); // Limpa o conteúdo da string, tornando-a vazia
    cout << "Seu nome contem " << nome.length() << " caracteres" << endl; // Retorna o número de caracteres da string (deve ser 0 após clear())

    nome.append("Silva"); // Adiciona a string "Silva" ao final da string nome
    cout << "Seu nome agora e: " << nome << endl; // Exibe o nome completo após a adição de " Silva"
    
    cout << "O primeiro caracter do seu nome e: " << nome.at(0) << endl; // Exibe o primeiro caractere da string

    nome.insert(0, "Joao "); // Insere a string "João " no início da string nome
    cout << "Seu nome agora e: " << nome << endl; // Exibe o nome completo após a inserção

    cout << "O sobrenome comeca na posicao: " << nome.find("Silva") << endl; // Retorna a posição da primeira ocorrência da substring "Silva" na string nome

    nome.erase(0, 5); // Remove os primeiros 5 caracteres da string nome (removendo "João ")
    cout << "Seu nome agora e: " << nome << endl; // Exibe o nome completo após a remoção de "João "

    return 0;
}