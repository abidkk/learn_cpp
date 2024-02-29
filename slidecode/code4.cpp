// C++ Program to show the syntax/working of Objects as a
// part of Object Oriented Programming
#include <iostream>
using namespace std;

class Person
{
    public:
    string name;
    int id;
};
int main()
{
    Person p1; // p1 is an object
    // Access attributes and set values
    p1.name = "Abid";
    p1.id = 15;
  
    // Print attribute values
    cout << p1.id << "\n";
    cout << p1.name;
    // cout << p1.getdetails() << endl;
    return 0;
};