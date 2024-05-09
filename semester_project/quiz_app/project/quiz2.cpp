#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

int main()
{
    int score = 0;
    string percentage;
    string grade;
    string remarks;
    string name;
    string roll;
    string opt;

    cout << "Please enter your name: ";
    cin >> name;

    cout << "Please enter your roll-No: ";
    cin >> roll;

    string myArray[20] = {
        "Q: What is the capital city of Pakistan? \n a) Lahore \n b) Islamabad  \n c) Karachi",
        "Q: Who is the current Deputy Prime Minister of Pakistan? \n a) Arif Alvi \n b) Ishaq Dar  \n c) Mehmood Khan",
        "Q: What is the national poet of Pakistan? \n a) Dr. Allama Iqbal  \n b) John Elia  \n c) Ahmed Faraz",
        "Q: Who is the founder of Pakistan?  \n a) Allama Iqbal  \n b) Quaid-e-Azam Muhammad Ali Jinnah  \n c) Liaquat Ali Khan",
        "Q: Which province of Pakistan is known as the Land of Five Rivers? \n a) Punjab  \n b) Sindh  \n c) Balochistan",
        "Q: What is the national sport of Pakistan? \n a) Cricket  \n b) Football  \n c) Hockey",
        "Q: Which Pakistani city is known as the City of Lights? \n a) Lahore  \n b) Islamabad  \n c) Karachi",
        "Q: What is the currency of Pakistan? \n a) Rupee  \n b) Dollar  \n c) Euro",
        "Q: Who is the current Prime Minister of Pakistan? \n a) Shehbaz Sharif  \n b) Imran Khan  \n c) Benazir Bhutto",
        "Q: What is the national bird of Pakistan? \n a) Peacock  \n b) Chukar Partridge  \n c) Eagle",
        "Q: What is the name of Pakistan's largest province by area? \n a) Punjab  \n b) Sindh  \n c) Balochistan",
        "Q: What is the name of Pakistan's national airline? \n a) Emirates  \n b) PIA (Pakistan International Airlines)  \n c) Qatar Airways",
        "Q: Who is the first female Prime Minister of Pakistan? \n a) Benazir Bhutto  \n b) Fatima Jinnah  \n c) Hina Rabbani Khar",
        "Q: What is the name of Pakistan's highest military award? \n a) Sitara-e-Imtiaz  \n b) Nishan-e-Haider  \n c) Nishan-e-Pakistan",
        "Q: What is the name of the Pakistani film industry? \n a) Lollywood  \n b) Bollywood  \n c) Hollywood",
        "Q: Who is the current President of Pakistan? \n a) Arif Alvi   \n b) Mamnoon Hussain  \n c) Asif Ali Zardari",
        "Q: Which Pakistani city is known as the City of Saints? \n a) Karachi  \n b) Multan  \n c) Lahore",
        "Q: What is the name of Pakistan's national animal? \n a) Markhor  \n b) Snow Leopard  \n c) Bengal Tiger",
        "Q: What is HTML ? \n a) Programming Language  \n b) Scripting Language  \n c) Markup Language",
        "Q: What is the Abbrivation of CSS ? \n a) Cascading Style Sheet  \n b) Cascading Simple Sheet  \n c) Coding Style Sheet",

    };
    // Initialize random seed:
    srand(time(NULL));

    for (int i = 1; i <= 5; i++)
    {
        cout << " " << endl;
        // Generate random number between 0 and 99
        int randomNumber = rand() % 19;
        // int randomIndex = rand() % 45;
        cout << myArray[randomNumber] << endl;
        cout << "Please select (a, b or c): ";
        cin >> opt;

        //
        string ansArray[20] = {
            "b",
            "b",
            "a",
            "b",
            "a",

            "c",
            "c",
            "a",
            "a",
            "c",

            "c",
            "b",
            "a",
            "b",
            "a",

            "c",
            "b",
            "a",
            "c",
            "a",

        };

        //
        if (opt == ansArray[randomNumber]) // Comparing with correct answers
        {
            // cout << "Correct \n";
            score += 20;
        }
        else
        {
            // cout << "Incorrect \n"; // Changed "Invalid" to "Incorrect"
        }
    }

    // Result Compiling
    cout << "\n \t\t______________ *** Result  Sheet *** ______________ \n \n";

    cout << "\t\t Name: " << name << endl;
    cout << "\t\t Roll: " << roll << endl;
    cout << "\t\t Score: " << score << endl;
    cout << "\t\t Precentage: " << score << "%" << endl;
    if (score > 80)
    {

        cout << "\t\tCongratulations!, You got Grade \"A\"\n"; // Use double quotes
    }

    else if (score > 60)
    {
        cout << "\t\tCongratulations!, You got Grade \"B\"\n"; // Use double quotes
    }
    else if (score > 40)
    {
        cout << "\t\tCongratulations!, You got Grade \"C\"\n"; // Use double quotes
    }
    else
    {
        cout << "\t\t Soory!, You were unable to qualify for next semester \n";
    }

    return 0;
}
