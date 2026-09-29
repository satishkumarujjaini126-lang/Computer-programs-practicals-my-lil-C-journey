#include <iostream>
using namespace std;
// this program tell us if a number entered by u is palindrome or not!.'
int main(int argc, char const *argv[])
{
    int num, rem, reverse = 0;
    cout << "enter a number - ";
    cin >> num;
    int n1 = num;
    while (num > 0)
    {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }
    if (n1 == reverse)
    {
        cout << "the number is palindrome";
    }
    else
    {
        cout << "the number is not palindrome";
    }

    return 0; 
}
