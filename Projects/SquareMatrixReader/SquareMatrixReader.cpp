#include <iostream>   // Include the iostream library for console input and output
#include <fstream>    // Include the fstream library for file handling

using namespace std;

int main() {
    int x; // Variable to store the read integer
    ifstream text; // Create an input file stream object

    // Open the file "test.txt" for reading
    text.open("test.txt");

    // Check if the file opened successfully
    if (!text) {
        cerr << "Unable to open file test.txt"; // Output error message if the file doesn't open
        return 1; // Return a non-zero value indicating error
    }

    // Nested loops to read a 3x3 matrix of integers from the input file
    for (int i = 1; i <= 3; i++) { // Outer loop for rows (1 to 3)
        for (int j = 1; j <= 3; j++) { // Inner loop for columns (1 to 3)
            text >> x; // Read an integer from the input file into 'x'

            // Output the integer 'x' to the console, followed by a space
            cout << x << " ";
        }
        cout << endl; // Print a newline after each row for formatting
    }

    text.close(); // Properly close the input file

    return 0; // Return 0 to indicate successful completion of the program
}
