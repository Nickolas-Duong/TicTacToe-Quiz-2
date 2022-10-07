//Header main file
#ifndef TICTACTOE_H //read once if multiple files have same name
#define TICTACTOE_H

#include <stdbool.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

enum win{Win, Loss, Scratch, None};
//Function declaration for player choice
void playerChoice(int player, char *loc[], int count);
//function declaration for AI random
void aiChoice(char *loc[], int count);
//function declaration for printing table
void printTable(char *loc[]);
//function declaration to print results
void printResults(enum win result[]);
//function declaration to determine if game is won
enum win checkResults(char *loc[], int player, int count);
//function definition to get user input
int getChoice();
#endif