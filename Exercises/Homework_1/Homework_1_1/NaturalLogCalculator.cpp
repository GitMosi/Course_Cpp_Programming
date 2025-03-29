#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    // Declare variables to store the parameter and result
    double param, result;

    // Prompt user to enter a double number
    cout << "Please enter a double number to see its natural logarithm as 'result'." << endl;

    // Read the user input into the param variable
    cin >> param;

    // Subtract the parameter from 1
    param = 1 - param;

    // Calculate the natural logarithm of the modified parameter
    result = log(param);

    // Start an infinite loop
    while (param > 0)
    {
        // Display the entered number and calculated result
        cout << "Your entered number: " << param << ".        " 
             << "\t" << "Your result: " << result << ".        " << endl;

        // Prompt user to enter another number
        cin >> param;

        // Modify the new parameter
        param = 1 - param;

        // Recalculate the result
        result = log(param);
    }

    // Return 0 to indicate successful program execution
    return 0;
}
