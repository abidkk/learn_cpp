#include <iostream>
using namespace std;

int main (){
    int num;

    cout << "Please enter a number ";
    cin >> num;

   for (size_t i = 2; i < num; i++)
   {

    cout << i;
    int res = num % i;
    if (res > 0)
    {
    cout << "Prime";
    }
    else
    {
    cout << "Compoite";
    }
    
    
   }
   
}