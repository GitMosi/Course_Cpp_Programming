#include <iostream>
#include <fstream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    // Open a file named "Numbers_1.txt" for reading
    ifstream myfile("Numbers_1.txt");

    // Declare an array to store 15 integers
    int x[15], a;

    // Iterate through the array elements
    for (int i = 0; i < 15; i++)
    {
        // Read an integer from the file into x[i]
        myfile >> x[i];

        // If it's the first number (i == 0), set a to this value
        if (i == 0)
        {
            a = x[i];
        }

        // Check if the current number is greater than a
        if (x[i] >= a)
        {
            // If so, update a with this new maximum value
            a = x[i];
        }
    }

    // Close the file after reading
    myfile.close();

    // Output the greatest number found
    cout << "The greatest number in your collection is: " << a << endl;

    return 0;
}
