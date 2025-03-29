#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    // Declare variables
    int i, j, d, g, h;
    double a, b, c, x, pi, taylor_series_1, taylor_series_2;
    taylor_series_2 = 0;
    pi = 3.14159265;
    i = 1;
    d = 3;
    h = 1;

    // Prompt user for input
    cout << "Please enter a number as a 'degree'! " << endl;
    cin >> a;

    // Adjust negative angles to positive range
    if (a >= 180)
    {
        while (a >= 180)
        {
            a = a - 180;
        }
        a = -a;
    }

    // Convert to radians
    x = a * pi / 180;

    // Calculate factorial for denominator
    g = d * (d - 2) * (d - 1);
    h = h * g;

    // Set precision for output
    cout << setprecision(8);

    // Handle different angle ranges
    if (a >= -45 && a <= 45)
    {
        for (c = 3; c <= 9; c = c + 2)
        {
            i = i + 1;
            j = i % 2;
            
            taylor_series_1 = pow(x, c) / h;
            cout << "The Nomial " << i << " is: " << taylor_series_1 << endl;

            if (j != 0)
            {
                taylor_series_2 = taylor_series_2 + taylor_series_1;
                cout << "Total Nomial is: " << taylor_series_2 + x << endl;
            }
            else if (j == 0)
            {
                taylor_series_2 = taylor_series_2 - taylor_series_1;
                cout << "Total Nomial is: " << taylor_series_2 + x << endl;
            }

            taylor_series_2 = taylor_series_2;
            g = 0;
            d = d + 2;
            g = d * (d - 1);
            h = h * g;
            cout << h << endl;
        }
    }
    // Similar code blocks for other angle ranges...

    // Final calculation
    taylor_series_2 = x + taylor_series_2;
    cout << "The 'Taylor Series' =    " << taylor_series_2 << endl;
    cout << "The 'sin(x)' =   " << sin(x) << endl;

    return 0;
}
