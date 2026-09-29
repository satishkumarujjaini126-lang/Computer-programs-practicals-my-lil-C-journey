#include <iostream>
using namespace std;
int main()
{

    int n, rem, reverse = 0;

    cout << "enter a number:";
    cin >> n;

    while (n > 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }

    cout << "Reverse number:" << reverse 6<< endl;
}