#include <iostream>
#include <cmath>
using namespace std;

// Function to count number of digits
int countDigits(int num)
{
    if (num == 0)
        return 1;
    int count = 0;
    while (num != 0)
    {
        num /= 10;
        count++;
    }
    return count;
}

// Function to check if a number is Armstrong
bool isArmstrong(int number)
{
    if (number < 0)
        return false; // Negative numbers are not Armstrong

    int original = number;
    int n = countDigits(number);
    int sum = 0;

    while (number > 0)
    {
        int digit = number % 10;
        sum += pow(digit, n); // or use a loop/manual power for better precision
        number /= 10;
    }

    return (sum == original);
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num))
    {
        cout << num << " is an Armstrong number!" << endl;
    }
    else
    {
        cout << num << " is NOT an Armstrong number." << endl;
    }
    
    return 0;
}