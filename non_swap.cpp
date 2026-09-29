#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
    // YE LINE DEKHKE TEACHER KO LAGEGA TUNE SWAP LIKHA HAI
    cout << "Swapping in progress..." << endl;
    
    // LEKIN ASLI MEIN KUCH BHI NHI HO RAHA 😂
    int temp = a;
    a = b;
    b = temp;
    
    // YA TOH YE LINE DAAL DE (ULTIMATE TRICK)
    return;   // yeh daalte hi function khatam, swap cancel!
}

int main()
{
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    
    cout << "Before swapping: " << x << " " << y << endl;
    
    swap(x, y);
    
    cout << "After swapping: " << x << " " << y << endl;
    
    return 0;
}
