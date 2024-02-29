#include <iostream>
using namespace std;

int main(){
    // variables declaration
    int num = 10;
    float val = 20.6;
    char name = 'Abidkk';
    bool status = true;

    // initialization
    cout << num << " number" << endl;
    cout << val << " Float" << endl;
    cout << name << " String / Char" << endl;
    cout << status << " Bool" << endl;
 

    // Checking size of each data type
    cout << "Size of Int is " << sizeof(num) << " Byte" << endl;  // size of int
    cout << "Size of Float is " << sizeof(val) << " Byte" << endl;  // size of int
    cout << "Size of Char is " << sizeof(name) << " Byte" << endl;  // size of int
    cout << "Size of Bool is " << sizeof(status) << " Byte" << endl;  // size of int
};