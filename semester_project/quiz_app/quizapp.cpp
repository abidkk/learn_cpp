#include <iostream>
using namespace std;

int main()
{
    int roll;
    string name;
    string chice1 ; 
    

    // getting user roll no
    cout << "Please Enter Your Roll No : ";
    cin >> roll;

    // getting user name
    cout << "Please Enter Your Name: ";
    cin >> name;

    // greeting user
    cout << "Welcome " << name << " To Quiz App \n";



    cout << "Q1: What is the capital of Pakistan ? " << endl ;
    cout << "a : Karachi \n";
    cout << "b : Lahore \n";
    cout << "c : Islamabad \n";
    
    cout << "Please Enter your opption ( a , b, c ) ";
    cin >> chice1;


    if (chice1 == "c") {
     cout << "True , Islamabad is the capital of Pakistan";
    }
    else {
        cout << "Wrond Answer";
    }




    return 0;
}