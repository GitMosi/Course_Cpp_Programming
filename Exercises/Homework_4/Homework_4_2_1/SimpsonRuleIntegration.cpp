#include <iostream>
#include <fstream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    // Declare file stream
    ofstream myfile;
    
    // Open a file named "Homework_4_2_1.txt" for writing
    myfile.open("Homework_4_2_1.txt");

    // Declare variables
    double x, y, y0, n, h, a, b, f1, f2, phi, u, g;

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
        
        // Calculate f1(x) and f2(x)
        f1 = ((2 * y0) / x) + (pow(x, 2) * exp(x));
        f2 = ((2 * y) / x) + (pow(x, 2) * exp(x));
        
        // Calculate phi
        phi = (0.5) * (f1 + f2);
        
        // Update u
        u = y0 + (h * phi);
        
        // Calculate g
        g = pow(x, 2) * (exp(x) - exp(1));

        // Output results
        cout << "x = " << x << "\t" << "u = " << u << "\t" << "g = " << g << endl;
        myfile << x << "\t" << u << "\t" << g << endl;

        // Update y0 for next iteration
        y0 = u;
    }

    // Close the file
    myfile.close();

    return 0;
}
