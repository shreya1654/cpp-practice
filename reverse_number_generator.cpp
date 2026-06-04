#include <iostream>
using namespace std;

int main()
{
    //DECLARING A VARIABLE TO STORE NUMBER AND TAKING INPUT FROM USER
    int num;
    cout << "Enter a number: ";
    cin >> num; 

    //DECLARING A VARIABLE TO STORE REVERSED NUMBER
    int reverse_num = 0;

    //REVERSING THE NUMBER
    while (num > 0) 
    {
        int digit = num % 10;   // GETTING THE LAST DIGIT
        reverse_num = reverse_num * 10 + digit;   // APPENDING THE DIGIT TO THE REVERSED NUMBER
        num /= 10;   // REMOVING THE LAST DIGIT
    }

    // DISPLAYING THE REVERSED NUMBER
    cout << "Reversed number: " << reverse_num << endl;

    return 0;
}