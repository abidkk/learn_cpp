#include <iostream>
using namespace std;

int main(){
    int age;

    cout << "Please enter your age: ";
    cin >> age;

    // conditions
    if (age > 17)
    {
       cout << "You are allowed";
    }
    else {
        cout << "You are not allowed";
    }
    
    return 0;
}