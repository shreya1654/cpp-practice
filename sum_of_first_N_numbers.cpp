#include <iostream>
using namespace std;

int main()
{
    // DECLARING A VARIABLE FOR COUNT OF NUMBERS AND TAKING INPUT
    int num;
    cout << "enter how many numbers you want to add: ";
    cin >> num;

    // DECLARING A VARIABLE FOR SUM AND INITIALIZING IT TO ZERO
    int sum = 0;    

    // CONDITION TO CHECK IF COUNT IS ZERO
    if (num == 0)
    {
        cout << "sum is: " << sum;
    }

    // CONDITION TO CHECK IF COUNT IS ONE
    else if (num == 1)
    {
        sum = 1; // SINCE THE FIRST NUMBER IS 1, THE SUM IS 1
        cout << "sum is: " << sum; 
    }
    else
    {

        // LOOP TO ADD FIRST N NUMBERS
        for (int i = 1; i <= num; i++)
        {
            sum += i; // ADDING THE CURRENT NUMBER TO THE SUM
        }
        cout << "sum is: " << sum; // OUTPUTTING THE FINAL SUM
    }
    return 0;   
}