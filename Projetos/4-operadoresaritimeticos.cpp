#include <iostream>
using namespace std;

int main()
{
    int estudantesSoma = 20;
    int estudantesSubtracao = 20;
    int estudantesMultiplicacao = 20;
    double estudantesDivisao = 20;
    int estudantesModulo = 20;
    double estudantesAritmeticos = 20 + 5 * 2 - 10 / 2; // Expressão aritmética que combina várias operações sem parênteses, seguindo a ordem +, /, + e -.
    double estudantesAritmeticosParenteses = (20 + 5 ) * 2 - 10 / 2; // Expressão aritmética que combina várias operações com parênteses, seguindo a ordem primeiro oque está dentro do parentes e depois +, /, + e -.

    //Soma
    estudantesSoma = estudantesSoma + 1; // Adiciona 1 ao número de estudantes
    estudantesSoma += 1; // Adiciona 1 ao número de estudantes usando o operador de atribuição composto
    estudantesSoma++; // Adiciona 1 ao número de estudantes usando o operador de incremento

    //Subtração
    estudantesSubtracao = estudantesSubtracao - 1; // Subtrai 1 do número de estudantes
    estudantesSubtracao -= 1; // Subtrai 1 do número de estudantes usando o operador de atribuição composto
    estudantesSubtracao--; // Subtrai 1 do número de estudantes usando o operador de decremento

    //Multiplicação
    estudantesMultiplicacao = estudantesMultiplicacao * 2; // Multiplica o número de estudantes por 2
    estudantesMultiplicacao *= 2; // Multiplica o número de estudantes por 2 usando o operador de atribuição composto

    //Divisão
    estudantesDivisao = estudantesDivisao / 2; // Divide o número de estudantes por 2
    estudantesDivisao /= 2; // Divide o número de estudantes por 2 usando o operador de atribuição composto

    //Módulo
    estudantesModulo = estudantesModulo % 9; // Calcula o resto da divisão do número de estudantes por 9
    estudantesModulo %= 9; // Calcula o resto da divisão do número de estudantes por 9 usando o operador de atribuição composto

    cout << "O numero de estudantes com soma e: " << estudantesSoma << endl;
    cout << "O numero de estudantes com subtracao e: " << estudantesSubtracao << endl;
    cout << "O numero de estudantes com multiplicacao e: " << estudantesMultiplicacao << endl;
    cout << "O numero de estudantes com divisao e: " << estudantesDivisao << endl;
    cout << "O numero de estudantes com modulo e: " << estudantesModulo << endl;
    cout << "O numero de estudantes com operacoes aritmeticas e: " << estudantesAritmeticos << endl;
    cout << "O numero de estudantes com operacoes aritmeticas e parenteses e: " << estudantesAritmeticosParenteses << endl;

    return 0;
}

