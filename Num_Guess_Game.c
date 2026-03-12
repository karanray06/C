#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int iResponse = 0;
    int iRandomNum = 0;
    
    printf("Welcome to the Number Guessing Game!\n");
    srand(time(NULL));
    iRandomNum = rand() % 10 + 1;
    
    printf("Guess a number between 1 and 10: ");
    scanf("%d", &iResponse);
    
    if(iResponse >= 1 && iResponse <= 10)
    {
        if(iResponse == iRandomNum)
        {
            printf("Congratulations! You guessed the correct number!\n");
        }
        else
        {
            printf("Wrong! The number was %d.\n", iRandomNum);
        }
    }
    else
    {
        printf("Please enter a valid number between 1 and 10.\n");
    }
    
    return 0;
}