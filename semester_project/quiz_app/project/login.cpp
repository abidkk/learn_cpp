// #include <iostream>
// #include <vector>
// #include <map>

// using namespace std;

// int main() {
//     // Declare an empty vector to store user objects
//     vector<map<string, string>> users;

//     // Create a user object with name and roll number
//     map<string, string> userObj;
//     userObj["name"] = "Abid";
//     userObj["roll"] = "cs101";

//     // Add the user object to the vector
//     users.push_back(userObj);

//     // Print the entire vector of user objects
//     for (const auto& user : users) {
//         // Use iterators to access key-value pairs
//         for (const auto& it : user) {
//             cout << it.first << ": " << it.second << endl;
//         }
//     }

//     return 0;
// }


#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for srand() seeding

using namespace std;

int main() {
    // Seed the random number generator (optional for better randomness)
    srand(time(0));

    int myArray[] = {10, 20, 30, 40, 50};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    // Generate a random index within the array bounds
    int randomIndex = rand() % arraySize;

    cout << "Random element: " << myArray[randomIndex] << endl;

    return 0;
}
