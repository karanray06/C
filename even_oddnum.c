#include <stdio.h>

int main()
{
    int num;// Variable to store the input number

    printf("Enter a number:");
    scanf("%d", &num);
// Check if the number is even or odd
    if(num % 2 == 0)
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }
    return 0;
}