// i/p n=4;

// o/p 
// A 
// A B 
// A B C 
// A B C D 

#include<stdio.h>
int main()
{
    int a,d,i,j,n;
    printf("\n Enter the number of rows");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {   a=1;
        for(j=1;j<=n;j++)
        {   int d=a+64;
            int ch =(char)d;
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
}