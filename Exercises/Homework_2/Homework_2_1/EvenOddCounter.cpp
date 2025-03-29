#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Declare variables to store the input number, counters for even and odd numbers, and loop variables
    int a, c, d, e, i, j;
    j = 0;  // Initialize j to 0
    i = 0;  // Initialize i to 0

    // Label for the loop
    name_1: cout << "Hello! Please enter the number of numbers you'll input, then input your numbers specifically. " << endl;
    
    // Read the number of inputs
    cin >> a;

    // Check if the number of inputs is at least 1
    if (a >= 1)
    {
        // Loop through each input
        for (int b = 0; b < a; b++)
        {
            // Read the next number
            cin >> c;
            
            // Check if the number is even
            d = c % 2;
            if (d == 0)
            {
                // If even, increment the even counter
                i++;
            }
            else if (d != 0)
            {
                // If odd, increment the odd counter
                j++;
            }
            else if (c == 1 || c == -1)
            {
                // Handle edge cases (1 or -1)
                j++;
            }
            else
            {
                // If the number is neither even nor odd, print an error message
                cout << "Dear dude! The thing that you entered (whole or some of them) is not even a number! " << endl;
            }
            
            // Keep track of the current input number
            e = b + 1;
        }

        // Display the results
        cout << "The number of your numbers was:   " << e << endl;
        cout << "The number of even numbers is:    " << i << endl;
        cout << "The number of odd numbers is:     " << j << endl;
    }
    else
    {
        // If no valid inputs were provided, print an error message and loop back to the beginning
        cout << "Please enter AT LEAST '1' number to have some results. " << endl;
        goto name_1;  // Jump back to the labeled statement
    }

    return 0;
}
