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

        cout << "O valor de x é: " << x << endl;
        cout << "O valor de y é: " << y << endl;
        cout << "O valor da soma é: " << soma << endl;

    // Double e Float
        double preco = 10.9999;
        double desconto = 0.1555;
        double precoFinal = preco - (preco * desconto);
        float novoPreco = 5.99;

        cout << "O valor do preço é: " << preco << endl;
        cout << "O valor do desconto é: " << desconto << endl;
        cout << "O valor do preço final é: " << precoFinal << endl;
        cout << "O valor do novo preço é: " << novoPreco << endl;

    // Char
        char classificacao = 'A';
        char inicial = 'C';

        cout << "A classificação é: " << classificacao << endl;
        cout << "A inicial é: " << inicial << endl;

    // Bool
        bool aprovado = true;
        bool reprovado = false;

        cout << "O aluno está aprovado? " << aprovado << endl;
        cout << "O aluno está reprovado? " << reprovado << endl;

    // String
        string nome = "João";
        string sobrenome = "Silva";
        string nomeCompleto = nome + " " + sobrenome;

        cout << "O nome é: " << nome << endl;
        cout << "O sobrenome é: " << sobrenome << endl;
        cout << "O nome completo é: " << nomeCompleto << endl;

    // Constantes
        const double PI = 3.14159; // Declaração de uma constante sempre escrita em letras maiúsculas por convenção
        double raio = 10;
        double circunferencia = 2 * PI * raio;
        //PI = 3.14; // Erro: não é possível modificar uma constante

        const int VELOCIDADE_DA_LUZ = 299792458; // Velocidade da luz em metros por segundo

        const int LARGURA = 1920;
        const int ALTURA = 1080;

        cout << "O valor de pi é: " << PI << endl;
        cout << "O valor do raio é: " << raio << endl;
        cout << "O valor da circunferência é: " << circunferencia << endl;
        cout << "A velocidade da luz é: " << VELOCIDADE_DA_LUZ << " m/s" << endl;
        cout << "A largura da tela é: " << LARGURA << " pixels" << endl;
        cout << "A altura da tela é: " << ALTURA << " pixels" << endl;

    return 0;
}
