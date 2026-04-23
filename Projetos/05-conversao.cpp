#include <iostream>
using namespace std;

int main()
{
    //Forma implicita
        int x = 3.14;
        char c1 = 102;        

        cout << "Forma implicita 3.14 para int: " << x << endl;
        cout << "Forma implicita 102 para char: " << c1 << endl;

    //Forma explicita
        double y = (int)3.14;
        char c2 = (char)102;
        int perguntasCorretas = 8;
        int perguntasTotal = 10;
        double percentagem = perguntasCorretas / (double)perguntasTotal * 100;

        cout << "Forma explicita 3.14 para int: " << y << endl;
        cout << "Forma explicita 102 para char: " << c2 << endl;
        cout << "Percentagem de perguntas corretas: " << percentagem << "%" << endl;


    return 0;
}