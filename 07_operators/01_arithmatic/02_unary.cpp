#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b;
    // Post Increment
    b = a++;
    cout << "In Post Increment a is "<<  a << " and b is " << b << endl;


    // Pre Increment
    int x = 10;
    int y;

    y = ++x;
    cout << "In Pree Increment x is "<<  x << " and y is " << y << endl;

    return 0;
}