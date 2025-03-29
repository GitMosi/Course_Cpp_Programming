#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Declare variables to store the input number, reversed number, and counter
    int a, b, i;

    // Prompt user to enter an integer
    cout << "Please enter an integer number." << endl;

    // Read the user input into the variable 'a'
    cin >> a;

    // Start an infinite loop
    while (a > 0)
    {
        // Extract the last digit of 'a' using modulo operation
        b = a % 10;
        
        // Remove the last digit from 'a' by division by 10
        a = a / 10;
        
        // Build the reversed number by multiplying current reversed number by 10 and adding the extracted digit
        i = i * 10 + b;
    }

    // Display the reversed integer number
    cout << "Your reversed integer number is: " << i << endl;

    // Return 0 to indicate successful program execution
    return 0;
}
