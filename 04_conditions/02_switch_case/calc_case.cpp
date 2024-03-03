#include <iostream>
using namespace std;

int main()
{
    int v1, v2;
    char ope;

    cout << "Please Enter First Number: ";
    cin >> v1;

    cout << "Please Enter Second Number: ";
    cin >> v2;

    cout << "Please Enter an Operator ( + , - , * , / ) ";
    cin >> ope;

    switch (ope)
    {
    case *"+":
        cout << "Sum of " << v1 << " and " << v2 << " is " << v1 + v2 << endl;
        break;

    case *"-":
        cout << "Subtraction of " << v1 << " and " << v2 << " is " << v1 - v2 << endl;
        break;

    case *"*":
        cout << "Multiplication of " << v1 << " and " << v2 << " is " << v1 * v2 << endl;
        break;

    case *"/":
        cout << "Division of " << v1 << " and " << v2 << " is " << v1 / v2 << endl;
        break;

    default:
        cout << "Invalid Operator ";
        break;
    }

    return 0;
}