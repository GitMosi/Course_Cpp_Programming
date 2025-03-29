#include <iostream>
#include <cmath> // Include cmath for pow function
using namespace std;

int main() {
    double b, c, x, sum; // Variables to hold input and computation results
    int fac, a; // Fac is used to keep track of factorial calculation and a is the input limit

    // Read inputs from user
    cin >> a; // Read the limit for the series (number of terms)
    cin >> x; // Read the value for which the series is calculated

    fac = 1; // Initialize factorial as 1
    sum = 0; // Initialize sum as 0

    // Loop to calculate the series terms
    for(int i = 3; i <= a; i += 2) { // Start from 3 and increment by 2 for odd terms
        fac = fac * i * (i - 1); // Update factorial for current i (this is actually (i!))
        
        // Calculate the term using the power function and the factorial
        c = pow(x, i) / fac; // pow returns x^i
        
        // Output the current term for debugging; can be commented out if not needed
        // cout << c << endl;

        sum += c; // Accumulate the sum of the terms
    }

    // Final result: sum + x (adding x might correspond to adding the first term in the series)
    cout << sum + x; 
    return 0; // Indicate successful completion
}
