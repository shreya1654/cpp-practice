#include<iostream>
using namespace std;

int main()
{
    
    cout << "WELCOME TO GRADE CALCULATOR" << endl;
    cout << "THE GRADE CALCULATOR CAN CALCULATE THE FINAL GRADE BASED ON SCORES IN DIFFERENT SUBJECTS" << endl;

    // VARIABLES TO STORE THE SCORES IN DIFFERENT SUBJECTS
    float maths, science, english, hindi, sst, total, percentage;

    //TAKING INPUT FROM USER
    cout << "enter the score in maths (out of 100)" << endl;
    cin >> maths;
    cout << "enter the score in science (out of 100)" << endl;
    cin >> science;
    cout << "enter the score in english (out of 100)" << endl;
    cin >> english;
    cout << "enter the score in hindi ( out of 100)" << endl;
    cin >> hindi;
    cout << "enter the score in sst (out of 100)" << endl;
    cin >> sst; 


    // CALCULATING THE TOTAL AND PERCENTAGE
    total = maths + science + english + hindi + sst;
    percentage = (total / 500) * 100;

    // DISPLAYING THE FINAL GRADE
    cout << "TOTAL SCORE: " << total << endl;
    cout << "PERCENTAGE: " << percentage << "%" << endl;

    if (percentage >= 90)
    {
        cout << "GRADE: A" << endl;
    }
     else if (percentage < 90 and percentage >= 80)
    {
        cout << "GRADE: B" << endl;
    }
    else if (percentage < 80 and percentage >= 70)
    {
        cout << "GRADE: C" << endl;
    }
    else if (percentage < 70 and percentage >= 60)
    {
        cout << "GRADE: D" << endl;
    }
    else
    {
        cout << "GRADE: F" << endl;
    }

    return 0;
    
}