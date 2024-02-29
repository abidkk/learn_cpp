// Perform Basics Operations (Addition, Subtract, Multiply and Divide)
#include <iostream>
using namespace std;

int main()
{
    int val1, val2;
    char sign;

    // getting first value
    cout << "Please Enter First number: ";
    cin >> val1;

    // getting second value
    cout << "Please Enter Second number: ";
    cin >> val2;

    // getting operator
    cout << "Enter an arithmetic sign (+, -, *, /): ";
    cin >> sign;

    // Perform calculations based on the sign and values
    if (sign == '+')
    {
        // Addition
        cout << "Sum of " << val1 << " and " << val2 << " is " << val1 + val2 << "\n";
    }
    else if (sign == '-')
    {
        // Subtraction
        cout << "Subtraction of " << val1 << " and " << val2 << " is " << val1 - val2 << "\n";
    }
    else if (sign == '*')
    {
        // Multiplication
        cout << "Product of " << val1 << " and " << val2 << " is " << val1 * val2 << "\n";
    }
    else if (sign == '/')
    {
        // Division
        cout << "Division of " << val1 << " and " << val2 << " is " << val1 / val2 << "\n";
    }
    else
    {
        cout << "Invalid sign entered." << endl;
    }
    return 0;
}
