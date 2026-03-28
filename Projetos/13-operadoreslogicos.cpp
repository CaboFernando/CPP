#include <iostream>
using namespace std;

int main()
{
    // Operadores lógicos
    // && (AND lógico): Retorna true se ambos os operandos forem verdadeiros.
    // || (OR lógico): Retorna true se pelo menos um dos operandos for verdadeiro
    // !  (NOT lógico): Retorna true se o operando for falso, e vice-versa.

    int temperatura;
    cout << "Informe a temperatura: ";
    cin >> temperatura;

    if(temperatura > 0 && temperatura < 30)
        cout << "A temperatura esta boa" << endl;
    else if(temperatura <= 0 || temperatura >= 30)
        cout << "A temperatura nao esta boa" << endl;
    else
        cout << "A temperatura invalida" << endl;

    bool ensolarado = true;

    if(!ensolarado)
        cout << "Hoje nao esta ensolarado" << endl;
    else
        cout << "Hoje esta ensolarado" << endl;

    return 0;
}