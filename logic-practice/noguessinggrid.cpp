#include<iostream>
#include<cstdlib>
#include<ctime>


using namespace std;

// defining a 5x5 grid as a global variable
char grid[5][5] = { ' ',' ',' ',' ',' ',
                    ' ',' ',' ',' ',' ',
                    ' ',' ',' ',' ',' ',
                    ' ',' ',' ',' ',' ',
                    ' ',' ',' ',' ',' '};


//function to display grid
void displaygrid()
{
    for ( int i=0; i<5 ; i++)
    {
        for ( int j = 0; j < 5; j++)
        {
            cout << grid[i][j] << '|';
        }
        cout << endl;
    }


}

//function to randomise the position of the hidden number
void randomposition()
{
    srand(time(0));
    
    int r = rand() % 5;
    int c = rand() % 5;

    //assinging the hidden number to the random position
    grid[r][c] = '1';
}

int main()
{
    //welcome message and rules
    cout << endl;
    cout << "Welcome to the Number Guessing Game!!" << endl;
    cout << endl;
    cout << "Guess the rows and columns to find the hidden number, you will get a maximum of 10 attempts!" << endl;
    cout << endl;

    // displaying the grid along with the hidden number
    displaygrid();
    randomposition();

    //making count variable to count number of attempts
    int count = 0;

    while (true)
    {
        int row, col;
        cout << "Enter row (1-5): ";
        cin >> row;
        cout << "Enter the column (1-5): ";
        cin >> col;
        cout << endl;
        cout << "You are left with " << 9 - count << " attempts." << endl;


        //incrementing the count variable after each attempt
        count++;


        //checking if maximum attempts reached
        if ( count == 10 )
        { 
            cout << "Oops! You've used all your attempts. Game Over!" << endl;
            displaygrid();
            break;
        }


        // updating the grid if the guessed position is empty
        else if ( grid[row-1][col-1] == ' ' )
        {
            grid[row-1][col-1] = '*';
        }


        // position is already guessed
        else if ( grid[row-1][col-1] == '*' )
        {
            cout << "You have already guessed this position, try again." << endl;
        }
        
        
        // correct guess show grid
        else if ( grid[row-1][col-1] == '1' )
        {
            cout << "Congratulations! You found the hidden number!" << endl;
            displaygrid();
            break;
        }

    }

    return 0;

}

