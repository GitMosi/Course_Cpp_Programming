#include <iostream>
#include <cmath> // Needed for std::sqrt
using namespace std;

int main() {
    int a, b, c;
    double delta, root1, root2;

    cout << "Enter coefficient a (non-zero): " << endl; 
    cin >> a;
    cout << "Enter coefficient b: " << endl; 
    cin >> b;
    cout << "Enter coefficient c: " << endl; 
    cin >> c;

    // Calculate the discriminant
    delta = b * b - 4 * a * c;

    // Determine the nature of the roots based on delta
    if (delta > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(delta)) / (2 * a);
        root2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Two distinct real roots: " << root1 << " and " << root2 << endl;
    } 
    else if (delta == 0) {
        // One real root (repeated)
        root1 = -b / (2 * a);
        cout << "One real root (repeated): " << root1 << endl;
    } 
    else {
        // No real roots, complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-delta) / (2 * a);
        cout << "Complex roots: " << realPart << " + " << imaginaryPart << "i and " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0; // Indicate successful completion
}
