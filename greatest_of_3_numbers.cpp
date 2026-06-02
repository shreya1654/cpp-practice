# include <iostream>
using namespace std;    

int main()
{
    // DECLARING THREE VARIABLES AND TAKING USER INPUT
    int num_1, num_2, num_3;
    cout << "Enter three numbers: ";    
    cin >> num_1 >> num_2 >> num_3;

    // CHECKING WHICH NUMBER IS THE GREATEST
    if (num_1 >= num_2 && num_1 >= num_3)
    {
        cout << "The greatest number is: " << num_1;
    }
    else if (num_2 >= num_1 && num_2 >= num_3)
    {
        cout << "The greatest number is: " << num_2;
    }
    else
    {
        cout << "The greatest number is: " << num_3;
    }
    return 0 ;
}