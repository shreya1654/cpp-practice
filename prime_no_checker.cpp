#include <iostream>
using namespace std;

int main()
{
    //DECLARING A VARIABLE AND TAKING INPUT FOR THE NUMBER
    int number;
    cout << "enter the number to be checked: "; 
    cin >> number;

    //CHECKING IF THE NUMBER IS PRIME OR NOT
    bool isPrime = true;
    if (number <= 1)
    {
        isPrime = false; // 0 and 1 are not prime numbers
    }
    else
    {
        for (int i = 2; i <= number / 2; ++i)
        {
            if (number % i == 0)
            {
                isPrime = false; // number is divisible by a number other than 1 and itself
                break;
            }
        }
    }
    if (isPrime)
    {
        cout << number << " is a prime number." << endl;
    }
    else
    {
        cout << number << " is not a prime number." << endl;
    }
    return 0;
}