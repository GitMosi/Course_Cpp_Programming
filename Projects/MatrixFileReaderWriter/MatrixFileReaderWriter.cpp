#include <iostream>
#include <fstream> // Include the fstream library for file handling
using namespace std;

int main() {
    int x; // Variable to store the read integer
    ifstream abs("test.txt"); // Open the input file "test.txt" for reading
    ofstream test("kutu.txt"); // Open the output file "kutu.txt" for writing

    // Nested loops to read a 3x3 matrix of integers from the input file
    for (int i = 1; i < 4; i++) { // Outer loop for rows (1 to 3)
        for (int j = 1; j < 4; j++) { // Inner loop for columns (1 to 3)
            abs >> x; // Read an integer from the input file into 'x'
            cout << x << "  "; // Output the integer 'x' to the console
        }
        cout << x << endl; // Print the last read integer followed by a newline
        test << x << endl; // Write the last read integer to the output file
    }

    abs.close(); // Close the input file
    test.close(); // Close the output file (it’s a good practice to close files)

    return 0; // Return 0 to indicate successful completion of the program
}
