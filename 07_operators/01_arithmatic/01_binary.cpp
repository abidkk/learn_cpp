// Binary Operators ( + , - , * , / , % )
#include <iostream>
using namespace std;

int main () {
int v1 , v2;

cout << "Please Enter First Values : ";
cin >> v1;

cout << "Please Enter Second Values : ";
cin >> v2;

// addition
cout << "Sum of " << v1 << " and " << v2 << " is " << v1 + v2 << endl;

// Subtraction
cout << "Subtraction of " << v1 << " and " << v2 << " is " << v1 - v2 << endl;

// Multiplication
cout << "Multiplication of " << v1 << " and " << v2 << " is " << v1 * v2 << endl;

// Division
cout << "Division of " << v1 << " and " << v2 << " is " << v1 / v2 << endl;

// Reminder
cout << "Reminder of " << v1 << " and " << v2 << " is " << v1 % v2 << endl;


return 0;
}