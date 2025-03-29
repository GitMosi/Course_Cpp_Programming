#include <iostream>
#include <fstream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    // Declare file stream
    ofstream myfile;
    
    // Open a file named "Homework_4_1_1.txt" for writing
    myfile.open("Homework_4_1_1.txt");

    // Declare variables
    double x, y, y0, n, h, a, b, f0, f;

    // Prompt user for input
    cout << "Please enter a number as 'a'. " << endl;
    cin >> a;
    cout << "Please enter a number as 'b'. " << endl;
    cin >> b;
    cout << "Please enter a number as 'y0'. " << endl;
    cin >> y0;
    cout << "Please enter a number as 'h'. " << endl;
    cin >> n;

    // Calculate step size
    h = (b - a) / n;

    // Perform numerical integration using Simpson's rule
    for (double i = 1; i <= n; i++)
    {
        // Calculate x value
        x = a + (i * h);
        
        // Calculate f(x) = (1 + x) / (1 + y0)
        f = (1 + x) / (1 + y0);
        
        // Update y
        y = y0 + (h * f);

        // Output results
        cout << "x = " << x << "\t" << "y = " << y << endl;
        myfile << "x = " << x << "\t" << "y = " << y << endl;
    }

    // Close the file
    myfile.close();

    return 0;
}
