// Nested If else
#include <iostream>
using namespace std;

int main()
{

    int age;
    int experience;

    cout << "Please enter your age: ";
    cin >> age;

    cout << "Please enter your experience: ";
    cin >> experience;

    // conditons
    if (age > 17){
        
        // Nested
        if (experience > 2){
            cout << "Your are perfect for the Job";
        }
        else{
            cout << "You have not required experience";
        }
    }
    else{
        cout << "Sorry, You are young ";
    }
    return 0;
}