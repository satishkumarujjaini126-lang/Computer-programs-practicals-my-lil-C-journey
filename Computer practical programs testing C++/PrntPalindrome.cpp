#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num, rem, reverse = 0;
    cout << "enter a number - ";
    cin>>num;
    while (num > 0)
    {
        rem = num%10;
        reverse = reverse * 10 + rem;
        num = num % 10;
    }
    cout << "the reversed number is"<<reverse;
    
    return 0;
}
