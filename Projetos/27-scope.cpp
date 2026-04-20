#include <iostream>
using namespace std;

//Variáveis globais são declaradas fora de todas as funções e podem ser acessadas por qualquer parte do programa. 
//Elas permanecem na memória durante toda a execução do programa.
int numeroGlobal = 10;

void mostrarNumero(int numero)
{    
    cout << "Valor da variavel global: " << numero << endl;
}

int main()
{
    //Variáveis locais são criadas dentro de uma função ou bloco de código e só podem ser acessadas dentro desse escopo. 
    //Elas são destruídas quando o bloco de código é finalizado.
    int numeroLocal = 1;
    cout << "Valor da variavel local: " << numeroLocal << endl;

    mostrarNumero(numeroGlobal);

    return 0;
}