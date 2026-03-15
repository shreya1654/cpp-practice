/*

#include <iostream>

int main() {
   std:: cout << "Hello, World!";
    return 0;
}




#include<iostream>
using namespace std;        // using namepsace std to avoid std:: prefix

int main()
{
    int a = 10;
    char b = 'B';
    bool istrue = true;
    bool isfalse = false;
    float pi = 3.14;
    
    cout << "value of a is: " << a << endl;                   // endl is used to insert a new line
    cout << b << endl;                                        // cout is for displaying output
    cout << "ascii value of B is: " << (int)b << endl;        // ASCII value of character (Type casting)

    // type casting is (conversion) implicit - compiler does it, explicit -  programmer does it 

    cout << istrue << endl;
    cout << isfalse << endl;
    cout << pi << endl;

    return 0;
}


// Operators are all same as in C language

// taking input from user

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter value of a: ";
    cin >> a;                      // cin with >> is used to take input from user

    cout << "Value of a is: " << a << endl;
    return 0;
}


//using ternary operator to find if someone can vote or not, taking age as input from user

#include<iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;
    (age >= 18) ? cout << "You can vote" << endl : cout << "You cannot vote" << endl;
    return 0;   

}

*/

