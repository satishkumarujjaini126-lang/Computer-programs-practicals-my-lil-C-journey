#include<iostream>
using namespace std;  // #~~~ This program prints 1 to 15 pyromadically. ~~~~#
int main(int argc, char const *argv[])
{
    int n = 1;
    for (int i = 1; i <=5 ; i++)
    {
    for (int j = 1; j <= i; j++)
    {
     cout<<n<<" ";
     n++;
    }
    cout<<"\n";
    }
    
    return 0;
}
