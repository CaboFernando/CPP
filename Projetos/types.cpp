#include <iostream>
#include <vector>
using namespace std;

typedef vector<pair<string, int>> pair_list_t;
typedef string text_t;
typedef int number_t;

using pair_list_u = vector<pair<string, int>>;
using text_u = string;
using number_u = int;

int main()
{
    pair_list_t pair_list1;
    text_t nome1 = "Carlos";
    number_t idade1 = 30;

    cout << "Meu nome é: " << nome1 << endl;
    cout << "Minha idade é: " << idade1 << endl;

    pair_list_u pair_list2;
    text_u nome2 = "Carlos";
    number_u idade2 = 30;

    cout << "Meu nome é: " << nome2 << endl;
    cout << "Minha idade é: " << idade2 << endl;

    return 0;
}