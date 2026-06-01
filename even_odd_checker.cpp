#include <iostream>
using namespace std;

int main()
{
    // DECLARING A VARIABLE AND TAKING INPUT FOR THE NUMBER
    int number;
    cout << "enter the number to be checked: ";
    cin >> number;

    // CHECKING IF THE NUMBER IS EVEN OR ODD
    if (number % 2 == 0)
    {
        cout << number << " is an even number." << endl;
    }
    else
    {
        cout << number << " is an odd number." << endl;
    }
    return 0;
}