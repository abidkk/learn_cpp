#include <iostream>
using namespace std;

int main()
{
    int score;

    cout << "Please etner your score: ";
    cin >> score;

    switch (score)
    {
    case 40:
        cout << "Pass with Grade D";
        break;

    case 50:
        cout << "Pass with Grade C";
        break;

    case 60:
        cout << "Pass with Grade C+";
        break;

    case 70:
        cout << "Pass with Grade B";
        break;

    case 80:
        cout << "Pass with Grade B+";
        break;

    case 90:
        cout << "Pass with Grade A";
        break;

            case 100:
        cout << "Pass with Grade A+";
        break;
    default:
     cout << "Fail less than 40 or Invalid score";
        break;
    }

    return 0;
}