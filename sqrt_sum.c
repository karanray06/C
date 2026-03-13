#include <stdio.h>

int main()
{
    int i, n, sum = 0;
    printf("Enter a positive number:");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        sum += (i*i);
    }
    printf("Sum of squares of first %d natural numbers is: %d\n", n, sum);
    return 0;
}