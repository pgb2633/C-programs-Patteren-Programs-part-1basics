// Solidrectangle
// i/p 
// n=4

// o/p

// * * * *
// * * * *
// * * * *
// * * * *


#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the number of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)//determine the number of line/rows
    {
        for(j=1;j<=n;j++)//determine  the number of columns or
                        // number of star in each line
        {
            printf("* ");// print star 
        }
        printf("\n");//new line
    }
  
    return 1;
}