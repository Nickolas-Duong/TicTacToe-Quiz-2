//Create a Tic Tac Toe Game where the user can play alone or with another player.
//Game will proceed to play until cat's scratch, win, or lose

//include system, string, time function, header with functions
//enum win condition?
#include "tictactoe.h"

//create main
int main()
{
    char *loc[9] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};
    bool inPlay = true;
    enum win p1 = None;
    enum win p2 = None;

    while(inPlay == true)
    {
        printTable(loc);
        
        playerChoice(1, loc);

        aiChoice(loc);

        p1 = checkResults(loc);
        p2 = checkResults(loc);

        if(p1 == Win || p2 == Win)
        {
            inPlay = false;
        }
        else
        {
            inPlay = true;
        }
    }

    return 0;
}
//variables
//int p1Choice
//int p2Choice
//char loc[]
//bool complete

//while loop to get chosen user choice
//Print out user menu

//Ask for user input

//determine game choice based on user choice (prevent any choice not allowed)

//switch based on choice
//end while loop

//case 1: Player v AI
//while loop where player plays the game against an AI
//condition = Enum status
//print current game board

//player inputs location via numbers for column | rows (prevent choosing a location already taken)

//AI then randomly chooses an option, re rolling when spot is occupied

//check for win condition met
//if else for enum
//change enum to game result
//print result of game
//break from loop

//case 2: player v player
//Repeat case 1, except allow player 2 to input choices instead of AI

//end program