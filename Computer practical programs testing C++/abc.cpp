#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) //this program print a line of stars...
{
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 1; k <= (5 - i); k++)
        {
            cout << "";
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }

    }


    return 0;
}
