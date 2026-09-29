#include <iostream>
using namespace std;

int main()
{
    double number;          // Using double so you can enter decimal numbers too
    double sum = 0.0;
    int count = 0;

    cout << "=== SUM OF AS MANY NUMBERS AS YOU WANT ===\n";
    cout << "Enter numbers one by one (press Ctrl+Z then Enter to finish on Windows,\n";
    cout << "or Ctrl+D on Linux/Mac, or type 'q' and press Enter):\n\n";

    while (true)
    {
        cout << "Enter number " << (count + 1) << ": ";
        
        // Try to read a number
        if (cin >> number)
        {
            sum += number;
            count++;
        }
        else
        {
            // If input is not a number (like 'q' or Ctrl+Z/D)
            cin.clear();  // Clear the error flag
            string dummy;
            getline(cin, dummy);  // Consume the bad input
            break;  // Exit the loop
        }
    }

    // Final result
    cout << "\n==============================\n";
    cout << "You entered " << count << " number(s)\n";
    cout << "Sum of all numbers = " << sum << endl;
    cout << "==============================\n";

    return 0;
}