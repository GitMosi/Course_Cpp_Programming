#include <iostream>
using namespace std;

int main() {
    float n, i, m1, m2, m3, mean;
    float maxMean = -1;  // Initialize to a value smaller than any possible mean
    int first = -1;      // Initialize to -1 to indicate no valid student found yet

    cout << "Enter the number of students: ";
    cin >> n; // Read the number of students

    for (i = 1; i <= n; i++) {
        cout << "Enter 3 marks for student " << i << ":" << endl;
        cin >> m1 >> m2 >> m3; // Read the marks for each student

        // Calculate mean for the current student's marks
        mean = (m1 + m2 + m3) / 3;

        // Check if the current mean is the highest
        if (mean > maxMean) { 
            maxMean = mean; // Update maximum mean
            first = i;      // Update index of the student with the highest mean
        }
    }

    // Output the student with the highest average
    if (first != -1) { // Make sure we found at least one student
        cout << "The student with the highest average is student number: " << first << " with an average of: " << maxMean << endl;
    } else {
        cout << "No students were entered." << endl;
    }

    return 0; // Indicate successful completion
}
