#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int x;
int main(){
    
do
{
    int maxNum =10;
    int randTargetNum;
    int guess;

//Create interactive menu
    printf("Welcome to the number guessing game\n");
    printf("Press 1 to play a game\nPress 2 to change the max number\nPress 3 to quit\n");
    scanf("%d",&x);
//Create program with user input
    if (x == 1)
    {
    printf("Enter a number from 1 - %d to guess\n", maxNum);
    srand(time(NULL));
    randTargetNum = (rand() % maxNum) + 1;
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
    printf("Enter a number to change the max guessable number\n");
    scanf("%d",&maxNum);
    srand(time(NULL));
    randTargetNum = (rand() % maxNum) + 1;
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
    //Create exit
    else if (x==3){
        printf("Thank you for playing!\n");
        exit(0);
    }
}while(x != 'q');
}