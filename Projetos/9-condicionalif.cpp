#include <iostream>
using namespace std;

int main()
{
    int idade;
    cout << "Digite a sua idade: ";
    cin >> idade;

    if(idade > 100 || idade < 0)
        cout << "Idade invalida." << endl;
    else if(idade >= 18)
        cout << "Voce e maior de idade." << endl;    
    else
        cout << "Voce e menor de idade." << endl;

    return 0;
}