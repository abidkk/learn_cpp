#include <iostream>
using namespace std;

int main()
{
    int row, col;
    
    cout << "Please enter the number of rows you want: ";
    cin >> row;

    cout << "Please enter the number of columns you want: ";
    cin >> col;
    cout << " \n";

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}