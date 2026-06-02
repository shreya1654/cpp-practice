#include <iostream>
using namespace std;

int main()
{
    //DECLARING A VARIABLE FOR COUNT OF NUMBERS AND TAKING INPUT
    int num;
    cout << "enter how many numbers you want to calculate factorial for: ";
    cin >> num;

    //DECLARING A VARIBLE TO CALCULATE FACTORIAL AND INITIALIZING IT TO 1
    int factorial = 1;

    //CONDITION TO CHECK IF COUNT IS ZERO OR ONE
    if (num == 0 || num == 1)
    {
        cout << "factorial is: " << factorial; // FACTORIAL OF ZERO AND ONE IS 1
    }

    //CONDITION TO CHECK IF COUNT IS GREATER THAN ONE
    else if (num > 1)
    {
        //LOOP TO CALCULATE FACTORIAL
        for (int i = 2; i <= num; i++)
        {
            factorial *= i; // MULTIPLYING THE CURRENT NUMBER WITH THE FACTORIAL
        }
        cout << "factorial is: " << factorial; // OUTPUTTING THE FINAL FACTORIAL
    }
    else
    {
        cout << "invalid input"; // HANDLING NEGATIVE INPUT
    }
    return 0;
}