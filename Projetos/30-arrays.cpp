#include <iostream>
using namespace std;

int main() 
{
    string car[] = {"Corvette", "Mustang", "Camaro"};

    for (int i = 0; i <= car->length(); i++)
    {
        cout << car[i] << endl;    
    }    

    cout << car << endl;

    return 0;
}