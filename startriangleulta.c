// i/p 
// n=4
// o/p 
// * * * *
// * * *
// * *
// *

#include<stdio.h>
int main()
{
    int n,i,j,a;
    printf("\n Enter the Number of rows");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {   a=(n+1)-i;
        for(j=1;j<=a;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}