#include <iostream> // Include the iostream library for input and output
using namespace std;

int main() {
    int n, a, fak; // Declare variables: n for the input number, a for the iterative counter, and fak for the factorial result

    cout << "Enter a number: " << endl; // Prompt the user for input
    cin >> n; // Read the number from the user

    // Initialize a and fak for calculating factorial
    a = 1; // Start from 1 for the multiplication
    fak = 1; // Factorial of 0 and 1 is 1

    // Loop to calculate the factorial of n
    while (a <= n) {
        fak = a * fak; // Update factorial
        a++; // Increment the counter
    }

    // Output the result
    cout << "Factorial = " << fak << endl;

    return 0; // Indicate successful completion
}
