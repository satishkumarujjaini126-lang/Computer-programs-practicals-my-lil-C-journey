#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int number;
    cout<< "enter a number";
    cin>> number;
    int digit = number % 10;
    cout << "last digit"<< digit<< "\n";

    

    return 0;
}
