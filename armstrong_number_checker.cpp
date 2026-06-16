#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //DECLARING A VARIABLE TO STORE NUMBER AND TAKING INPUT FROM USER
    int  num;
    cout << "enter a number: ";
    cin >> num;

    //STORING THE ORIGINAL NUMBER TO COMPARE LATER
    int original_num = num ;

    //DECLARING A VARIABLE TO STORE THE NUMBER OF DIGITS
    int num_digits = 0;    
    
    //CALCULATING THE NUMBER OF DIGITS
    int temp = num;
    while (temp > 0)
    {
        temp /= 10;
        num_digits++;
    }       

    //DECLARING A VARIABLE TO STORE THE SUM OF POWERS OF DIGITS
    int sum_of_powers = 0; 

    //CALCULATING THE SUM OF POWERS OF DIGITS
    temp = num;
    while (temp > 0)
    {
        int digit = temp % 10;   // GETTING THE LAST DIGIT
        sum_of_powers += pow(digit, num_digits);   // ADDING THE POWER OF THE DIGIT TO THE SUM
        temp /= 10;   // REMOVING THE LAST DIGIT
    }

    // CHECKING IF THE NUMBER IS AN ARMSTRONG NUMBER
    if (sum_of_powers == original_num)
    {
        cout << "The number is an Armstrong number." << endl;
    }
    else
    {
        cout << "The number is not an Armstrong number." << endl;
    }

    return 0;
}