#include <iostream>
using namespace std;

int main() {
    int a, b, i = 1; // Declare variables: 'a', 'b', and 'i', initializing 'i' to 1

    cout << "1,2,3"; // Initial output, possibly indicating the start of values

    // Infinite loop to generate numbers based on the formulas
    while (true) {
        a = 6 * i + 1; // Calculate 'a' using the formula 6i + 1
        b = 6 * i - 1; // Calculate 'b' using the formula 6i - 1

        // Break the loop if both 'a' and 'b' exceed 100
        if (a >= 100 && b >= 100) {
            break; // Exit the loop when both conditions are met
        }

        // Print 'a' if it is less than 100
        if (a < 100) {
            cout << a << " "; // Output 'a' followed by a space
        }

        // Print 'b' if it is less than 100
        if (b < 100) {
            cout << b << " "; // Output 'b' followed by a space
        }

        i++; // Increment 'i' to go to the next set of calculations
    }

    cout << endl; // Print a newline for better formatting of output

    return 0; // Return 0 to indicate successful completion of the program
}
