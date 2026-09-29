#include<iostream>
using namespace std;

class add
{
public:
    int sum(int num1, int num2)
    {
        return num1 + num2;
    }
    int sum(int num1, int num2, int num3)
    {
        return num1 + num2 + num3;
    }
};

int main()
{
    add a;
    cout << a.sum(10, 20) << endl;        // Calls the two-parameter version
    cout << a.sum(10, 20, 30) << endl;    // Calls the three-parameter version
    return 0;
}
