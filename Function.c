//Add header file to Function.c
#include "tictactoe.h"


//function for player choosing location
void playerChoice(int player, char *loc[], int count)
{
    //local variables
    int col = 0;
    int row = 0;
    int choice;
    bool complete = false;

    //Do not run if max moves made
    if(count >= 9)
    {
        complete = true;
    }

    //while loop (move made)
    while(complete != true)
    {   
        col = 0;
        row = 0;

        //While loop to make sure input is correct
        while(col <1 || col > 4 || row < 1 || row > 4)
        {
            //Ask player to make a move
            printf("Player %d, make a move...\n", player);

            //get input for col
            printf("Choose a column: ");
            col = getChoice();

            //get input for row
            printf("Choose a row: ");
            row = getChoice();

            //reset if value is incorrect
            if (col < 1 || row < 1 || col >= 4 || row >= 4)
            {
                printf("Choice error, please try again...%d %d\n", col, row);
                col = 0;
                row = 0;
            }
        }

        switch(row)
        {
            //row 1
            case 1:
            {
                switch (col)
                {
                    //col 1
                case 1:
                    //if not X and O
                    if(loc[0] != "X" && loc[0] != "O")
                    {
                        //Set to X or O depending on player
                        if(player == 1)
                        {
                            loc[0] = "O";
                        }
                        else
                        {
                            loc[0] = "X";
                        }
                        //Set complete to true
                        complete = true;
                    }
                    //reset if location is taken
                    else
                    {
                        printf("Error, location already taken...\n");
                    }
                    break;

                    //col 2
                case 2:
                    if(loc[1] != "X" && loc[1] != "O")
                    {   
                        //set based on player
                        if(player == 1)
                        {
                            loc[1] = "O";
                        }
                        else
                        {
                            loc[1] = "X";
                        }
                        complete = true;
                    }
                    //Error if location taken
                    else
                    {
                        printf("Error, location already taken...\n");
                    }
                    break;
                    //col 3
                case 3:
                    if(loc[2] != "X" && loc[2] != "O")
                    {
                        //set based on player
                        if(player == 1)
                        {
                            loc[2] = "O";
                        }
                        else
                        {
                            loc[2] = "X";
                        }
                        complete = true;
                    }
                    //Error if taken
                    else
                    {
                        printf("Error, location already taken...\n");
                    }
                    break;    
                default:
                    break;
                }
                break;
            }
            //row 2
            case 2:
            {
                switch (col)
                {
                    //col 1
                case 1:
                    if(loc[3] != "X" && loc[3] != "O")
                    {
                        //set based on player
                        if(player == 1)
                        {
                            loc[3] = "O";
                        }
                        else
                        {
                            loc[3] = "X";
                        }
                        complete = true;
                    }
                    //Error if taken
                    else
                    {
                        printf("Error, location already taken...\n");
                    }
                    break;
                    
                    //col 2
                case 2:
                    if(loc[4] != "X" && loc[4] != "O")
                    {
                        //Set based on player
                        if(player == 1)
                        {
                            loc[4] = "O";
                        }
                        else
                        {
                            loc[4] = "X";
                        }
                        complete = true;
                    }
                    //Error if taken
                    else
                    {
                        printf("Error, location already taken...\n");
                    }
                    break;
                    //col 3
                case 3:
                    if(loc[5] != "X" && loc[5] != "O")
                    {
                        //Set based on player
                        if(player == 1)
                        {
                            loc[5] = "O";
                        }
                        else
                        {
                            loc[5] = "X";
                        }
                        complete = true;
                    }
                    //Error if taken
                    else
                    {
                        printf("Error, location already taken...\n");
                    }
                    break;    
                default:
                    break;
                }
                break;
            }
            //row 3
            case 3:
            {
                switch (col)
                {
                    //col 1
                case 1:
                    if(loc[6] != "X" && loc[6] != "O")
                    {   
                        //Set based on player
                        if(player == 1)
                        {
                            loc[6] = "O";
                        }
                        else
                        {
                            loc[6] = "X";
                        }
                        complete = true;
                    }
                    //Error if taken
                    else
                    {
                        printf("Error, location already taken...\n");
                    }
                    break;
                    //col 2
                case 2:
                    if(loc[7] != "X" && loc[7] != "O")
                    {
                        //Set based on player
                        if(player == 1)
                        {
                            loc[7] = "O";
                        }
                        else
                        {
                            loc[7] = "X";
                        }
                        complete = true;
                    }
                    //Error if taken
                    else
                    {
                        printf("Error, location already taken...\n");
                    }
                    break;
                    //col 3
                case 3:
                    if(loc[8] != "X" && loc[8] != "O")
                    {
                        //Set based on player
                        if(player == 1)
                        {
                            loc[8] = "O";
                        }
                        else
                        {
                            loc[8] = "X";
                        }
                        complete = true;
                    }
                    //Error if taken
                    else
                    {
                        printf("Error, location already taken...\n");
                    }
                    break;    
                default:
                    break;
                }
                break;
            }
        }
    }
}

//function for random choice by AI
void aiChoice(char *loc[], int count)
{
    //local variables
    time_t t;
    int col;
    int row;
    bool complete = false;
    
    //Do not run if max moves taken
    if(count == 9)
    {
        complete = true;
    }
    //Else show that AI is taking its move
    else
    {
        printf("Player 2 is making a move...\n");
    }

    while(complete != true)
    {
        col = 0;
        row = 0;

        //Randomize numbers
        srand((unsigned) time(&t));

        //Random col
        col = (rand() % 3) + 1;

        //Random row
        row = (rand() % 3) + 1;

        switch(row)
        {
            //row 1
            case 1:
            {
                switch (col)
                {
                    //col 1
                case 1:
                    //if not X and O
                    if(loc[0] != "X" && loc[0] != "O")
                    {
                        loc[0] = "X";
                        //Set complete to true
                        complete = true;
                    }
                    break;

                    //col 2
                case 2:
                    if(loc[1] != "X" && loc[1] != "O")
                    {
                        loc[1] = "X";
                        complete = true;
                    }
                    break;
                    //col 3
                case 3:
                    if(loc[2] != "X" && loc[2] != "O")
                    {
                        loc[2] = "X";
                        complete = true;
                    }
                    break;    
                default:
                    break;
                }
                break;
            }
            //row 2
            case 2:
            {
                switch (col)
                {
                    //col 1
                case 1:
                    if(loc[3] != "X" && loc[3] != "O")
                    {
                        loc[3] = "X";
                        complete = true;
                    }
                    break;
                   //col 2
                case 2:
                    if(loc[4] != "X" && loc[4] != "O")
                    {
                        loc[4] = "X";
                        complete = true;
                    }
                    break;
                    //col 3
                case 3:
                    if(loc[5] != "X" && loc[5] != "O")
                    {
                        loc[5] = "X";
                        complete = true;
                    }
                    break;    
                default:
                    break;
                }
                break;
            }
            //row 3
            case 3:
            {
                switch (col)
                {
                    //col 1
                case 1:
                    if(loc[6] != "X" && loc[6] != "O")
                    {
                        loc[6] = "X";
                        complete = true;
                    }
                    break;
                    //col 2
                case 2:
                    if(loc[7] != "X" && loc[7] != "O")
                    {
                        loc[7] = "X";
                        complete = true;
                    }
                    break;
                    //col 3
                case 3:
                    if(loc[8] != "X" && loc[8] != "O")
                    {
                        loc[8] = "X";
                        complete = true;
                    }
                    break;    
                default:
                    break;
                }
                break;
            }
        }
    }
}

//function definition for printing table
void printTable(char *loc[])
{
    //Print the board for player to see
    printf("Current Board: \n");
    printf("      C   O   L\n");
    printf("      1   2   3\n");
    printf("    +---+---+---+\n");
    printf("R 1 | %s | %s | %s |\n", loc[0], loc[1], loc[2]);
    printf("    +---+---+---+\n");
    printf("O 2 | %s | %s | %s |\n", loc[3], loc[4], loc[5]);
    printf("    +---+---+---+\n");
    printf("W 3 | %s | %s | %s |\n", loc[6], loc[7], loc[8]);
    printf("    +---+---+---+\n");
}

//function definition for printing results
void printResults(enum win result[])
{
    int playerCount = 2;
    //Loop and output game results based on player
    for(int i = 0; i < playerCount; i++)
    {
        //If player won
        if(result[i] == Win)
        {
            printf("Player %d Wins!\n", i+1);
        }
        //If player lost
        else if(result[i] == Loss)
        {
            printf("Player %d Loses!\n", i+1);
        }
        //If neither player won
        else if(result[i] == Scratch && result[i+1] == Scratch)
        {
            printf("No One Wins! Scratch Game!\n");
            break;
        }
        //If game is not played or in progress
        else
        {
            printf("No Game Played Yet or In Progress Still!\n");
        }
    }
}
//function definition for determine game state
enum win checkResults(char *loc[], int player, int count)
{
    //Local Variable
    char icon;
    
    //Set icon based on player
    if(player == 1)
    {
        icon = 'O';
    }
    else
    {
        icon = 'X';
    }
    
    //If Columns are the same, player has won
    if(*loc[0] == icon && *loc[3] == icon && *loc[6] == icon|| *loc[1] == icon && *loc[4] == icon && *loc[7] == icon|| *loc[2] == icon && *loc[5] == icon && *loc[8] == icon)
    {
        return Win;
    }
    //If Rows are the same, player has won
    else if(*loc[0] == icon && *loc[1] == icon && *loc[2] == icon|| *loc[3] == icon && *loc[4] == icon && *loc[5] == icon|| *loc[6] == icon && *loc[7] == icon && *loc[8] == icon)
    {
        return Win;
    }
    //if Diagonals are the same, player has won
    else if(*loc[0] == icon && *loc[4] == icon && *loc[8] == icon|| *loc[2] == icon && *loc[4] == icon && *loc[6] == icon)
    {
        return Win;
    }
    //If no matches and max plays are reached, both players Scratch
    else if (count >= 9)
    {
        return Scratch;   
    }
    //Else default state
    else
    {
        return None;
    }
}

//fucntion definition for getting choice
int getChoice()
{   
    //Local Variable
    int choice = 0;

    //Flush out statement
    fflush(stdout);

    //Get choice from user
    scanf("%d", &choice);
    return choice;   
}
//Function definition to set game state
int setGameState()
{
    //Local variable
    int choice = 0;

    //While choice is invalid
    while(choice != 1 && choice != 2)
    {
        //get choice
        choice = getChoice();

        //If choice is 1
        if(choice == 1)
        {   
            //Player chooses PVE
            printf("Player vs AI mode chosen... beginning game...\n");
        }
        //Else if choice is 2
        else if(choice == 2)
        {   
            //Player chooses PVP
            printf("Player vs Player mode chosen... beginning game...\n");
        }
        //Else Error if choice not valid
        else
        {
            printf("Error... choice not recognized...\n");
        }
    }

    //Return choice
    return choice;
}