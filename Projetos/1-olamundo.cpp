#include <iostream>
using namespace std;

int main()
{

    // Impressões na tela
        cout << "Ola, Mundo!" << endl;
        cout << "Eu gosto de Pizza!" << endl;

    // Int
        int a; //declaração
        a = 5; //atribuição

        int x = 5; //declaração e atribuição
        int y = 10; //declaração e atribuição
        int soma = x + y; //declaração, atribuição e expressão

        cout << "O valor de x e: " << x << endl;
        cout << "O valor de y e: " << y << endl;
        cout << "O valor da soma e: " << soma << endl;

    // Double e Float
        double preco = 10.9999;
        double desconto = 0.1555;
        double precoFinal = preco - (preco * desconto);
        float novoPreco = 5.99;

        cout << "O valor do preço e: " << preco << endl;
        cout << "O valor do desconto e: " << desconto << endl;
        cout << "O valor do preço final e: " << precoFinal << endl;
        cout << "O valor do novo preço e: " << novoPreco << endl;

    // Char
        char classificacao = 'A';
        char inicial = 'C';

        cout << "A classificacao e: " << classificacao << endl;
        cout << "A inicial e: " << inicial << endl;

    // Bool
        bool aprovado = true;
        bool reprovado = false;

        cout << "O aluno esta aprovado? " << aprovado << endl;
        cout << "O aluno esta reprovado? " << reprovado << endl;

    // String
        string nome = "Joao";
        string sobrenome = "Silva";
        string nomeCompleto = nome + " " + sobrenome;

        cout << "O nome e: " << nome << endl;
        cout << "O sobrenome e: " << sobrenome << endl;
        cout << "O nome completo e: " << nomeCompleto << endl;

    // Constantes
        const double PI = 3.14159; // Declaração de uma constante sempre escrita em letras maiúsculas por convenção
        double raio = 10;
        double circunferencia = 2 * PI * raio;
        //PI = 3.14; // Erro: não é possível modificar uma constante

        const int VELOCIDADE_DA_LUZ = 299792458; // Velocidade da luz em metros por segundo

        const int LARGURA = 1920;
        const int ALTURA = 1080;

        cout << "O valor de pi e: " << PI << endl;
        cout << "O valor do raio e: " << raio << endl;
        cout << "O valor da circunferencia e: " << circunferencia << endl;
        cout << "A velocidade da luz e: " << VELOCIDADE_DA_LUZ << " m/s" << endl;
        cout << "A largura da tela e: " << LARGURA << " pixels" << endl;
        cout << "A altura da tela e: " << ALTURA << " pixels" << endl;

    return 0;
}
