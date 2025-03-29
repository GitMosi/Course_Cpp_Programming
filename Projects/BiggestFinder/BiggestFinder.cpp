#include <iostream>
#include <fstream>

using namespace std;

void biggestfunc(int a[15]);

int main() {
    int a[15] = {0}; // Initialize the array to ensure it starts with known values

    biggestfunc(a);

    return 0;
}

void biggestfunc(int b[15]) {
    ifstream myfile("Arraytext.txt");
    
    // Check if the file opened successfully
    if (!myfile) {
        cout << "Unable to open the file." << endl;
        return;
    }

    int ma = 0; // Declare a variable to store the maximum value
    bool firstValue = true; // Flag to indicate the first value being processed

    for (int i = 0; i < 15 && myfile >> b[i]; i++) {
        // If this is the first value, initialize ma with it
        if (firstValue) {
            ma = b[i];
            firstValue = false; // Set the flag to false after the first value
        } else if (b[i] > ma) {
            ma = b[i]; // Update maximum if current value is greater
        }
    }

    // Check if we read at least one value
    if (!firstValue) {
        cout << "The largest number is: " << ma << endl;
    } else {
        cout << "No numbers were found in the file." << endl;
    }

    myfile.close();
}
