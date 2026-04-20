#include <iostream>
using namespace std;

double areaQuadrado(double lado)
{
    return lado * lado; // Retorna o valor da área do quadrado
}

double volumeCubo(double lado)
{
    return lado * lado * lado; // Retorna o valor do volume do cubo
}

string concatenarNomes(string nome1, string nome2)
{
    return nome1 + " " + nome2; // Retorna a concatenação dos dois nomes
}

int main()
{
    double longitude = 5.0;
    cout << "Area do quadrado: " << areaQuadrado(longitude) << endl;
    cout << "Volume do cubo: " << volumeCubo(longitude) << endl;

    string nome = "Carlos";
    string segundoNome = "Fernando";
    cout << "Nome completo: " << concatenarNomes(nome, segundoNome) << endl;

    return 0;
}