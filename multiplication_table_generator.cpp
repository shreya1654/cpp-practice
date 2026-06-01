#include <iostream>
using namespace std;

int main()
{
    // DECLARING VARIABLE AND TAKING INPUT FOR NUMBER
    int num;
    cout << "Enter the number to print it's multiplication table:" << endl ;
    cin >> num;

    //CHECKING IF THE NUMBER IS POSITIVE ADN VALID
    //IF YES THEN PRINTING THE TABLE USING LOOP
    if (num>0)
    {
        for ( int i = 1 ; i <= 10 ; i++)
        {
            cout << num << "*" << i << "=" << num * i << endl ;
        }
    }
    else {
        cout << "Invalid number" << endl;
    }
return 0;
}