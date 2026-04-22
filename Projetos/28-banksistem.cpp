#include <iostream>
#include <iomanip>
using namespace std;

void mostrarSaldo(double saldo)
{
    cout << "Saldo atual: R$ " << fixed << setprecision(2) << saldo << endl;
}

double depositar(double saldo)
{
    double valor;
    cout << "Digite o valor a ser depositado: R$ ";
    cin >> valor;

    if(valor < 0)
    {
        cout << "Valor invalido! O deposito deve ser maior que zero." << endl;
        return saldo;
    }

    saldo += valor;
    cout << "Deposito de R$ " << fixed << setprecision(2) << valor << " realizado com sucesso!" << endl;
    return saldo;
}

double sacar(double saldo)
{
    double valor;
    cout << "Digite o valor a ser sacado: R$ ";
    cin >> valor;

    if(valor < 0)
    {
        cout << "Valor invalido! O saque deve ser maior que zero." << endl;
        return saldo;
    }
    else if(valor > saldo)
    {
        cout << "Saldo insuficiente! Operação cancelada." << endl;
        return saldo;
    }
    else
    {
        saldo -= valor;
        cout << "Saque de R$ " << fixed << setprecision(2) << valor << " realizado com sucesso!" << endl;
        return saldo;
    }
}

void mostrarMenu(double saldo)
{
    char opcao;

    do
    {
        cout << "****************************" << endl;
        cout << "Selecione uma opcao:" << endl;
        cout << "****************************" << endl;
        cout << "1. Mostrar saldo" << endl;
        cout << "2. Depositar" << endl;
        cout << "3. Sacar" << endl;
        cout << "4. Sair" << endl;
        cout << "****************************" << endl;
        cin >> opcao;

        switch (opcao)
        {
            case '1':
                mostrarSaldo(saldo); 
                break;
            case '2':
                saldo = depositar(saldo);
                break;
            case '3':
                saldo = sacar(saldo);
                break;
            case '4':
                cout << "Saindo do sistema..." << endl;
                break;
            default:
                cout << "Opção invalida! Tente novamente." << endl;
        }
    } while (opcao != '4');
}

int main()
{
    double saldo = 0;
    mostrarMenu(saldo);

    return 0;
}