#include <iostream>
using namespace std;

int main()
{
    //DECLARING A VARIABLE TO STORE NUMBER AND TAKING INPUT FROM USER
    int num;
    cout << "Enter a number: ";
    cin >> num; 

    //DECLARING A VARIABLE TO STORE REVERSED NUMBER
    int reverse = 0;

    //REVERSING THE NUMBER
    while (num > 0) 
    {
        int digit = num % 10;   // GETTING THE LAST DIGIT
        reverse = reverse * 10 + digit;   // APPENDING THE DIGIT TO THE REVERSED NUMBER
        num /= 10;   // REMOVING THE LAST DIGIT
    }

    // DISPLAYING THE REVERSED NUMBER
    cout << "Reversed number: " << reverse << endl;

    return 0;
}