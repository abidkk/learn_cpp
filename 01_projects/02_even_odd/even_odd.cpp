#include <iostream>
using namespace std;

int main () {
    int num;
    cout << "Hello \n";
    
    cout << "Please enter a number. ";
    cin >> num;

  int check  = num % 2;


if (check == 0) {
cout << "The number " << num << " is Even";
}
else
{
  cout << "The number " << num << " is Odd";
}


}