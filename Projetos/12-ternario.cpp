#include <iostream>
using namespace std;

int main()
{
    //Ternário é uma forma mais simples de escrever um if-else, usando a seguinte sintaxe:
    //condição ? expressão_se_verdadeira : expressão_se_falsa;

    int qualidicacao = 75;

    //Exemplo usando o operador ternário para verificar se a qualificação é suficiente para aprovação
    if(qualidicacao >= 60)
        cout << "Aprovado" << endl;
    else
        cout << "Reprovado" << endl;

    //Usando o operador ternário para a mesma lógica
    string resultado = (qualidicacao >= 60) ? "Aprovado" : "Reprovado";
    cout << resultado << endl;

    int numero = 8;

    numero % 2 ? cout << "O numero e par" << endl : cout << "O numero e impar" << endl;

    bool afirmacao = true;

    afirmacao ? cout << "A afirmacao e verdadeira" << endl : cout << "A afirmacao e falsa" << endl;

    return 0;
}