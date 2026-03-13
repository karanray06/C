#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,n1,n2,q;
    printf("Enter two numbers:");
    scanf("%d %d", &n, &m);
    q=n/m;
    n1=q*m;
    if(n*m>0){
        n2= m*(q+1);
    }else{
        n2= m*(q-1);
    }
    if (abs(n-n1)<abs(n-n2))
    {
        printf("Closest multiple of %d to %d is: %d\n", m, n, n1);
    }else{
        printf("Closet multiple of %d to %d is: %d\n", m, n, n2);
    }
    return 0;

}