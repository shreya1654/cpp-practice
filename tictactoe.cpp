#include<iostream>
using namespace std;

//DEFINING A 3X3 GRID AS A GLOBAL VARIABLE

char arr[3][3] = {' ',' ',' ',
                  ' ',' ',' ',
                  ' ',' ',' '};

//FUNCTION TO DISPLAY THE GRID
void displayBoard()
{
    
for ( int i = 0; i < 3; i++)
{
    for ( int j = 0; j < 3; j++ )
    {
        cout << arr[i][j] << '|' ;
    }
    cout << endl;
}
}

//FUNCTION TO CHECK FOR WINNING CONDITIONS
int checkwin()
{
    //check horizontal matches
    //1st row
    if ( arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2] && arr[0][0] != ' ')
    {
        cout << "PLayer " << arr[0][0] << " wins!" << endl;
        return 1;
    }
    //2nd row
    else if  ( arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2] && arr[1][0] != ' ')
    {
        cout << "PLayer " << arr[1][0] << " wins!" << endl;
        return 1;
    }
    //3rd row
    else if  ( arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2] && arr[2][0] != ' ')
    {
        cout << "PLayer " << arr[2][0] << " wins!" << endl;
        return 1;
    }
    //check vertical matches
    //1st column
    else if ( arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0] && arr[0][0] != ' ')
    {
        cout << "PLayer " << arr[0][0] << " wins!" << endl;
        return 1;
    }
    //2nd column
    else if  ( arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1] && arr[0][1] != ' ')
    {
        cout << "PLayer " << arr[0][1] << " wins!" << endl;
        return 1;
    }
    //3rd column
    else if  ( arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2] && arr[0][2] != ' ')
    {
        cout << "PLayer " << arr[0][2] << " wins!" << endl;
        return 1;
    }
    //check diagonal matches
    //left to right diagonal
    else if ( arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] != ' ')
    {
        cout << "PLayer " << arr[0][0] << " wins!" << endl;
        return 1;
    }
    //right to left diagonal
    else if ( arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][2] != ' ')
    {
        cout << "PLayer " << arr[0][2] << " wins!" << endl;
        return 1;
    }
    
    return 0;
}


int main()
{
    cout << "Welcome to Tic Tac Toe!" << endl;
    displayBoard();

    //INITIALIZING PLAYER, ROW, COLUMN AND COUNT VARIABLES
    char player= 'X';
    int row, col;
    int count=0;

    //LOOP TO TAKE INPUTS FROM PLAYERS AND CHECK FOR WINNING CONDITIONS
    while (true)
    {
        //taking input for row and column
        cout << "it is player " << player  << "'s turn." << endl;
        cout << "Enter row(1-3): " ; 
        cin >> row;
        cout<< "Enter column(1-3): " ;
        cin>> col;

        //updating the board
        arr[row-1][col-1] = player;

        // printing updated board
        displayBoard();

        //checking for win
        int check = checkwin();
        if ( check == 1 )
        {
            break;
        }

        //INCREMENTING THE COUNT VARIABLE AND CHECKING FOR DRAW CONDITION 
        count++;
        if ( count == 9 )
        {
            cout << "The game is a draw!" << endl;
            break;
        }

        // switching player
        player= (player == 'X') ? 'O' : 'X';

    }
return 0;
}