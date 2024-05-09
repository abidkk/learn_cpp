#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

int main()
{
    string name;
    string roll;
    string opt;

    cout << "Please enter your name: ";
    cin >> name;

    cout << "Please enter your roll-No: ";
    cin >> roll;

    string myArray[45] = {
        "Q:  What is the capital city of Pakistan? \n a) Lahore \n b) Islamabad  \n c) Karachi",

        "Q: Which river is known as the lifeline of Pakistan? \n a) River Ganges  \n b) River Nile  \n c) River Indus",

        "Q: What is the national flower of Pakistan? \n a) Jasmine  \n b) Rose  \n c) Sunflower",

        "Q: What is the name of Pakistan's highest peak? \n a) K2 (Mount Godwin-Austen)  \n b) Nanga Parbat  \n c) Gasherbrum I",

        "Q: Which Pakistani city is famous for its kite-flying festival? \n a) Lahore  \n b) Islamabad  \n c) Karachi",

        "Q: What is the name of the Pakistani film industry? \n a) Lollywood  \n b) Bollywood  \n c) Hollywood",

        "Q: Who is the first female Prime Minister of Pakistan? \n a) Benazir Bhutto  \n b) Fatima Jinnah  \n c) Hina Rabbani Khar",

        "Q: What is the name of Pakistan's national emblem? \n a) Star and Crescent  \n b) Minar-e-Pakistan  \n c) State Emblem of Pakistan",

        "Q: Which Pakistani city is famous for its blue pottery? \n a) Multan  \n b) Quetta  \n c) Hyderabad",
    };

    // Initialize random seed:
    srand(time(NULL));

    for (int i = 1; i <= 3; i++)
    {
        cout << " " << endl;
        // Generate random number between 0 and 99
        int randomNumber = rand() % 9;
        // int randomIndex = rand() % 45;
        cout << myArray[randomNumber] << endl;
        cout << "Please select (a, b or c): ";

        cin >> opt;

        // Correcting the format of opt
        // opt = toupper(opt[0]); // Convert to uppercase and take first character

        string ansArray[45] = {
            "b", "c", "a",  "b", "c", "a" ,"a",  "b", "c",
        };

        if (opt == ansArray[randomNumber]) // Comparing with correct answers
        {
            cout << "Correct";
        }
        else
        {
            cout << "Incorrect"; // Changed "Invalid" to "Incorrect"
        }
    }

return 0 ;
}
