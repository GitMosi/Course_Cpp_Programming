#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
    // Declare variables
    int m = 5;
    double a[m], n;
    double *pnt;
    
    // Initialize pointer to point to the beginning of array a
    pnt = a;
    
    cout << "Please enter 5 numbers to see their reverse. " << endl;

    // Read 5 numbers into the array
    for (int i = 0; i < m; i++)
    {
        cin >> n;
        a[i] = n;
    }

    cout << "The reversed numbers are: " << endl;

    // Print the array elements in reverse order using pointer arithmetic
    for (int j = 4; j >= 0; j--)
    {
        cout << *(pnt + j) << " ";
    }
    cout << "." << endl;

    return 0;
}
