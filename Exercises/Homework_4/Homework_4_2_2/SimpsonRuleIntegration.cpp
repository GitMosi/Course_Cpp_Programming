#include <iostream>
#include <fstream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    // Declare file stream
    ofstream myfile;
    
    // Open a file named "Homework_4_2_2.txt" for writing
    myfile.open("Homework_4_2_2.txt");

    // Declare variables
    double x, y, y0, n, h, a, b, f, g;

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
        
        // Calculate f(x) = (2*y0/x) + (x^2 * exp(x))
        f = ((2 * y0) / x) + (pow(x, 2) * exp(x));
        
        // Update y
        y = y0 + (h * f);
        
        // Calculate g(x) = x^2 * (exp(x) - exp(1))
        g = pow(x, 2) * (exp(x) - exp(1));

        // Output results
        cout << "x = " << x << "\t" << "y = " << y << "\t" << "g = " << g << endl;
        myfile << x << "\t" << y << "\t" << g << endl;

        // Update y0 for next iteration
        y0 = y;
    }

    // Close the file
    myfile.close();

    return 0;
}
