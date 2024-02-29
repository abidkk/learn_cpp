#include <iostream>
// Function to calculate the factorial of a number
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1; // Base case: factorial of 0 and 1 is 1
    }
    else
    {
        return n * factorial(n - 1); // Recursive case: n! = n * (n-1)!
    }
}
int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num < 0)
    {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    }
    else
    {
        int result = factorial(num);
        std::cout << "Factorial of " << num << " is " << result << std::endl;
    }
    return 0;
}
