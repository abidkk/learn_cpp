#include <iostream>
using namespace std;

int main(){
    int age ;
    
    cout << "Please enter your age: ";
    cin >> age;

    // conditions
    if (age > 60)
    {
        cout << "You are too old.";
    }
    else if (age > 17)
    {
        cout << "Your are Suitable";
    }else {
        cout << "You are too young";
    }

    return 0;
}