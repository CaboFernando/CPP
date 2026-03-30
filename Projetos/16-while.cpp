#include <iostream>
using namespace std;

int main()
{
    string nome;

    while(nome.empty())
    {
        cout << "Digite seu nome!" << endl;
        getline(cin, nome); //Usamos getline para ler o nome completo, incluindo espaços, caso haja, e caso a pessoa apenas aperte enter, o nome ficará vazio e o loop continuará pedindo para digitar o nome.
    }
        

    cout << "Ola, " << nome << "!" << endl;

    return 0;
}