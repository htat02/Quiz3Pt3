#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char inp;
int main(){
    
do
{
    int x;
    int maxNum =10;
    int randTargetNum;
    int guess;

    srand(time(NULL));
    randTargetNum = (rand() % maxNum) + 1;
//Create interactive menu
    printf("Welcome to the number guessing game\n");
    printf("Press 1 to play a game\nPress 2 to change the max number\nPress 3 to quit\n");
    scanf("%d",&x);
//Create program with user input
    if (x == 1)
    {
    printf("Enter a number from 1 - %d to guess\n", maxNum);
    
        do{    

            scanf("%d", &guess);
                if(guess > randTargetNum){
                    printf("You guessed too high. Please try again!\n");
                }
                if(guess < randTargetNum){
                    printf("You guessed too low. Please try again!\n");
                }

        }while(guess != randTargetNum);
        printf("You have guessed correctly!\n");
}
//Create max number change
    else if (x == 2)
    {
    printf("Test");
    }
    //Create exit
    else if (x==3){
        exit(0);
    }
}while(inp != 'q');
}