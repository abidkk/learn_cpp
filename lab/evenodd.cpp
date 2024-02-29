#include <iostream>
using namespace std;

int main () {
    // initialize variable
    int num;
    
    // get values
    cout << "Please enter a number. ";
    cin >> num;

    // logic for get even
    int check  = num % 2;


if (check == 0) {
cout << "The number " << num << " is Even";
}
else
{
  cout << "The number " << num << " is Odd";
}

return 0;
}