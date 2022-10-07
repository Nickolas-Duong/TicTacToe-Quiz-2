//Add header file to Function.c
#include "tictactoe.h"


//function for player choosing location
void playerChoice(int player, char *loc[])
{
    //local variables
    int col = 0;
    int row = 0;
    int choice;
    bool complete = false;

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
            printf("%d\n", col);
            //get input for row
            printf("Choose a row: ");
            row = getChoice();
            printf("%d\n", row);

            //reset if value is incorrect
            if (col < 1 || row < 1 || col >= 4 || row >= 4)
            {
                printf("Choice error, please try again...%d %d\n", col, row);
                col = 0;
                row = 0;
            }
        }

        printf("Exit while loop\n");

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
                    else
                    {
                        printf("Error, location already taken...\n");
                    }
                    break;
                    //col 3
                case 3:
                    if(loc[2] != "X" && loc[2] != "O")
                    {
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
                    else
                    {
                        printf("Error, location already taken...\n");
                    }
                    break;
                    
                    //col 2
                case 2:
                    if(loc[4] != "X" && loc[4] != "O")
                    {
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
                    else
                    {
                        printf("Error, location already taken...\n");
                    }
                    break;
                    //col 3
                case 3:
                    if(loc[5] != "X" && loc[5] != "O")
                    {
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
                    else
                    {
                        printf("Error, location already taken...\n");
                    }
                    break;
                    //col 2
                case 2:
                    if(loc[7] != "X" && loc[7] != "O")
                    {
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
                    else
                    {
                        printf("Error, location already taken...\n");
                    }
                    break;
                    //col 3
                case 3:
                    if(loc[8] != "X" && loc[8] != "O")
                    {
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
void aiChoice(char *loc[])
{
    //local variables
    time_t t;
    int col;
    int row;
    bool complete = false;
    //randomize random number

    
    while(complete != true)
    {
        col = 0;
        row = 0;

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
                    //reset if location is taken
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
    printf("Current Board: \n");
    printf("    1   2   3\n");
    printf("  +---+---+---+\n");
    printf("1 | %s | %s | %s |\n", loc[0], loc[1], loc[2]);
    printf("  +---+---+---+\n");
    printf("2 | %s | %s | %s |\n", loc[3], loc[4], loc[5]);
    printf("  +---+---+---+\n");
    printf("3 | %s | %s | %s |\n", loc[6], loc[7], loc[8]);
    printf("  +---+---+---+\n");
}

//function definition for printing results
void printResults(enum win result, int player)
{
    if(result == Win)
    {
        printf("Player %d Wins!\n", player);
    }
    else if(result == Loss)
    {
        printf("Player %d Loses!\n", player);
    }
    else if(result == Scratch)
    {
        printf("No One Wins!\n");
    }
    else
    {
        printf("No Game Played Yet!\n");
    }
}
//function definition for determine game state
enum win checkResults(char *loc[], int player)
{
    char icon;
    if(player == 1)
    {
        icon = 'O';
    }
    else
    {
        icon = 'X';
    }
    if(*loc[0] == icon && *loc[3] == icon && *loc[6] == icon|| *loc[1] == icon && *loc[4] == icon && *loc[7] == icon|| *loc[2] == icon && *loc[5] == icon && *loc[8] == icon)
    {
        return Win;
        printf("win\n");
    }
    else if(*loc[0] == icon && *loc[1] == icon && *loc[2] == icon|| *loc[3] == icon && *loc[4] == icon && *loc[5] == icon|| *loc[6] == icon && *loc[7] == icon && *loc[8] == icon)
    {
        return Win;
        printf("win\n");
    }
    else if(*loc[0] == icon && *loc[4] == icon && *loc[8] == icon|| *loc[2] == icon && *loc[4] == icon && *loc[6] == icon)
    {
        return Win;
        printf("win\n");
    }
    else
    {
        return None;
    }
}

//fucntion definition for getting choice
int getChoice()
{
    int choice = 0;
    fflush(stdout);
    scanf("%d", &choice);
    return choice;   
}
