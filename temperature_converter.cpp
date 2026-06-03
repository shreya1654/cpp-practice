#include <iostream>
using namespace std;

int main()
{
    //GIVING A MENU TO CHOOSE CONVERSION TYPE
    //DECLARING A VARIABLE FOR TAKING THE USER'S CHOICE
    int choice;
    cout << "WELCOME TO TEMPERATURE CONVERTER" << endl;
    cout << "PLEASE SELECT THE CONVERSION TYPE (1-4):" << endl;
    cout << "1. Celsius to Farehenheit" << endl;
    cout << "2. Farehenheit to Celsius" << endl;
    cout << "3. Celsius to Kelvin" << endl;
    cout << "4. Kelvin to Celsius" << endl;
    cin >> choice;

    //DECLARING VARIABLE FOR TEMPERATURE VALUE ADN TAKING INPUT
    float temp;
    cout << "PLEASE ENETR THE TEMPERATURE VALUE: ";
    cin >> temp;

    //USING SWITCH CASE TO PERFORM THE CONVERSION BASED ON USER'S CHOICE
    switch (choice)
    {
        case 1:
        cout << temp << " Celsius is equal to " << (temp * 9/5) + 32 << " Farehenheit." << endl;
        break;
        case 2:
        cout << temp << " Farehenheit is equal to " << (temp - 32) * 5/9 << " Celsius." << endl;
        break;
        case 3: 
        cout << temp << " Celsius is equal to " << temp + 273.15 << " Kelvin." << endl;
        break;  
        case 4:
        cout << temp << " Kelvin is equal to " << temp - 273.15 << " Celsius." << endl;
        break;
        default:
        cout << "INVALID CHOICE. PLEASE SELECT A NUMBER BETWEEN 1 AND 4." << endl;
    }
    return 0;
}