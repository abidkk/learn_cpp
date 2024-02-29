#include <iostream>
using namespace std;

int main(){

    // declarration
    signed int num1;
    unsigned int num2;
    long int num3;
    short int num4;

    // instantiation
    num1 = 11111;
    num2 = 22222;
    num3 = 3333880783;
    num4 = 44444;

    // Checking size of each varaible
    cout << "Size of signed is " << sizeof(num1) << " Byte" << endl;  // size of int
    cout << "Size of unsigned is " << sizeof(num2) << " Byte" << endl;  // size of int
    cout << "Size of long is " << sizeof(num3) << " Byte" << endl;  // size of int
    cout << "Size of short is " << sizeof(num4) << " Byte" << endl;  // size of int

    return 0;
}