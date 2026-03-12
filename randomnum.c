#include <stdio.h>
#include <stdlib.h>
int main()
{
    int iRandomNum = 0;
    int iResponse = 0;
    iRandomNum = rand() % 10 + 1; // Generate a random nuumber between 1 and 10
    printf("Guess the number between 1 and 10: ");
    scanf("%d", &iResponse);
    if(iRandomNum == iResponse)
    {
        printf("Congratulations! you guessed the number correctly.\n");
    }
    else{
        printf("Sorry! you guessed the number incorrectly.\n");
        printf("The correct guessed number was: %d\n", iRandomNum); 
    }

}