#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    // Declare variables
    int m;
    
    cout << "Please enter the number of your numbers. " << endl;
    name_1: cin >> m;
    
    if (m <= 1)
    {
        cout << "The entered number is wrong. Please enter a number that is greater than 1." << endl;
        goto name_1; // Jump back to the input prompt if m <= 1
    }

    double a[m]; // Declare array a with size m
    double b = 0;
    double c, mean, condition;

    cout << "Please enter your numbers. " << endl;

    // Read m numbers into the array
    for(int i = 0; i < m; i++)
    {
        cin >> c;
        a[i] = c;
        b += a[i]; // Add each number to b
    }

    mean = b / m; // Calculate average
    condition = mean * 2; // Set condition as twice the average

    cout << "The number(s) that is greater than twice the average is(are): " << endl;
    
    // Find numbers greater than twice the average
    for(int j = 0; j < m; j++)
    {
        if (a[j] > condition)
        {
            cout << a[j] << " ";
        }
        else
        {
            // Handle case when all numbers are less than twice the average
            if(j == m - 1 && a[j] < condition)
            {
                cout << "Nothing";
            }
        }
    }

    cout << "." << endl;

    return 0;
}
