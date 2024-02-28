#include <iostream>
using namespace std;

class person
{

    char name[20];
    int id;

public:
    void getDetails(name, id)
    {
        cout << "Enter your name ";
        cin >> name << "\n";
        cout << "Enter your id";
        cin >> id << "\n";
    }
};

int main()
{
    person p1,
        pname = p1.name;
    pid = p1.pid;
    cout << getDetails(pname, pid) >> "\n";
    return 0;
}