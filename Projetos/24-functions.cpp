#include <iostream>
using namespace std;

void felizAniversario(string nome, int idade)
{
    cout << "Parabens para " << nome << endl;
    cout << "Nessa data querida" << endl;
    cout << "Muitas felicidades" << endl;
    cout << "Muitos anos de vida\n" << endl;

    cout << "Voce tem " << idade << " anos" << endl;
}

int main()
{
    string nome = "Maria";
    int idade = 25;

    felizAniversario(nome, idade);
    felizAniversario(nome, idade);

    return 0;
}