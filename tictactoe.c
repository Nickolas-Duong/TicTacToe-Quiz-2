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
    int count;
    int choice = 0;

    count = 0;
    printf("Welcome! Ready to play Tic-Tac-Toe?\n");
    printf("Please choose a game mode...\n");
    printf("1 - Player vs AI\n");
    printf("2 - Player vs Player\n");

    choice = getGameState();

    //Switch for choice of game
    switch (choice)
    {
    //Player vs AI
    case 1:
        //While game is in progress
        while(inPlay == true)
        {   
            //Show Game Board
            printTable(loc);
            
            //get player choice
            playerChoice(1, loc, count);

            //Increment Count
            count++;

            //Check if player 1 has won
            players[0] = checkResults(loc, 1, count);

            //If Player 1 has won
            if(players[0] == Win)
            {
                //Game no longer in play
                inPlay = false;
                
                //Player 2 has lost
                players[1] = Loss;
                
                //Show Game Results
                printResults(players);
                break;
            }
            //If Player 2 has won
            else if(players[1] == Win)
            {
                //Game no longer in play
                inPlay = false;

                //Player 1 has lost
                players[0] = Loss;

                //Show Game Results
                printResults(players);
                break;
            }
            //game stays in play
            else
            {
                inPlay = true;
            }

            //AI does takes turn, repeat above
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
            //If no one has won
            else if(players[0] == Scratch && players[1] == Scratch)
            {
                //End game
                inPlay = false;

                //Show results
                printResults(players);
            }
            else
            {
                //Game continues
                inPlay = true;
            }
        }
        break;
    //Player vs Player
    case 2:
        while(inPlay == true)
        {
            //Show game board
            printTable(loc);
            
            //Get player 1 choice
            playerChoice(1, loc, count);

            //Increase game moves
            count++;

            //Check if player 1 has won
            players[0] = checkResults(loc, 1, count);

            //Repeat like PvE
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

            //Show Game Board again
            printTable(loc);

            //Get player 2 input, like player 1
            playerChoice(2, loc, count);
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
            //If game was not won by any
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
        break;
    default:
        break;
    }

    //End program
    return 0;
}