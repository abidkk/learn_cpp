#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;

    // 01 AND operator && : both condition should be true 
    if (a > 5 && b > 15 )
    {
        cout << "In AND operator Both conditions are true \n";
    }
    

    // 02 OR operator  || : any one condition should be true
    if (a < 5 || b > 15 )
    {
        cout << "In OR operator Any one condition shoub be true \n";
    }


    // 03 NOT operator  ! :
    if ( b != 23 )
    {
        cout << "Not Operator \n";
    }


    return 0;
}