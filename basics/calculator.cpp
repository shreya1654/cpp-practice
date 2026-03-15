#include<iostream>
using namespace std;

int main()
{
    while(true)
    {
        // IN THIS PROGRAM WE WILL CREATE A SIMPLE CALCULATOR THAT CAN PERFORM BASIC ARITHMETIC OPERATIONS
        cout << "WELCOME TO CALCULATOR" << endl;
        cout << "THIS CALCULATOR CAN PERFORM BASIC ARITHMETIC OPERATIONS" << endl;
        cout << "INCLUDING ADDITION, SUBTRACTION, MULTIPLICATION, AND DIVISION" << endl;

        // VARIABLES TO STORE THE NUMBERS AND THE OPERATION
        int num_1, num_2;
        char operation;

        // TAKING INPUT FROM USER
        cout << "enter first number" << endl;
        cin >> num_1;
        cout << "enter second number" << endl;
        cin >> num_2;
        cout << "enter operation (+,-,*,/):" << endl;
        cin >> operation; 

         // PERFORMING THE OPERATION BASED ON USER INPUT
        switch (operation){
             case '+': 
            int sum;
            sum=num_1+num_2;
            cout << "the sum is " << sum << endl ;
            break;
            case '-': 
            int diff;
            diff= num_1-num_2;
            cout << "the difference is " << diff << endl ;
            break;
            case '*':
            int prod;
            prod= num_1*num_2;
            cout << "the product is " << prod << endl ;
            break;
            case '/':
            float quot;
            quot= num_1/num_2;
            cout << "the quotient is " << quot << endl;
             break;
            default:
            cout << "the operation in invalid" << endl;
        }

        char choice;
        cout << "choose if you want to continue? (y/n):" << endl;
        cin >> choice;

        if (choice=='n'){
        break;
        }
    }
   return 0;
}