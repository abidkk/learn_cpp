#include <iostream>
using namespace std;

int main (){
    int i ,e;

    // for loop without statement
    for ( i = 0; i < 6; i++)
    {
       cout << "Hello " << i << endl;
    }

    cout << "__________________ \n";

    // for loop with break statement
        for (e = 0; e < 6; e++)
    {
        if (e == 3)
        {
         cout << "Hello " << e << endl;
         break;
        }
        
      
    }
    return 0;
}