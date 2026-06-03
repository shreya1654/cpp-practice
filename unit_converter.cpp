#include <iostream>
using namespace std;

int main()
{
    //GIVING A MENU TO CHOOSE CONVERSION TYPE
    //DECLARING A VARIABLE FOR TAKING THE USER'S INPUT
    int choice;
    cout << "WELCOME TO UNIT CONVERTER" << endl;
    cout << "PLEASE SELECT THE CONVERSION TYPE (1-4): " << endl;
    cout << "1. Kilometers to Meters" << endl;
    cout << "2. Meters to Kilometers" << endl;
    cout << "3. Kilograms to Grams" << endl;
    cout << "4. Grams to Kilograms" << endl;
    cin >> choice;

    //DECLARING VARIABLE FOR VALUE AND TAKING INPUT
    float value;
    cout << "PLEASE ENTER THE VALUE TO CONVERT: ";
    cin >> value;

    //USING SWITCH CASE TO PERFORM THE CONVERSION BASED ON USER'S CHOICE
    switch (choice)
    {
        case 1:
        cout << value << " Kilometers is equal to " << value * 1000 << " Meters." << endl;
        break;
        case 2:
        cout << value << " Meters is equal to " << value / 1000 << " Kilometers." << endl;
        break;
        case 3: 
        cout << value << " Kilograms is equal to " << value * 1000 << " Grams." << endl;
        break;  
        case 4:
        cout << value << " Grams is equal to " << value / 1000 << " Kilograms." << endl;
        break;
        default:
        cout << "INVALID CHOICE. PLEASE SELECT A NUMBER BETWEEN 1 AND 4." << endl;
    }
    return 0;
}