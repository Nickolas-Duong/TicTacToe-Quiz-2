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
    enum win players[2] = {None, None};

    count = 0;

    while(inPlay == true)
    {
        printTable(loc);
        
        playerChoice(1, loc);
        count++;
        players[0] = checkResults(loc, 1, count);

        printf("%d\n", count);

        if(players[0] == Win)
        {
            inPlay = false;
            players[1] = Loss;
            printResults(players);
            break;
        }
        else if(players[1] == Win)
        {
            inPlay = false;
            players[0] = Loss;
            printResults(players);
            break;
        }
        else
        {
            inPlay = true;
        }

        aiChoice(loc, count);
        count++;
        players[1] = checkResults(loc, 2, count);
        if(players[0] == Win)
        {
            inPlay = false;
            players[1] = Loss;
            printResults(players);
            break;
        }
        else if(players[1] == Win)
        {
            inPlay = false;
            players[0] = Loss;
            printResults(players);
            break;
        }
        else if(players[0] == Scratch && players[1] == Scratch)
        {
            inPlay = false;
            printResults(players);
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