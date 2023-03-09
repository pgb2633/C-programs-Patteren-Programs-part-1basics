// i/p n=4
// o/p 
// 1 
// 1 2
// 1 2 3
// 1 2 3 4

#include<stdio.h>
int main()
{
    int n,i,j;
    printf("\n Enter the number of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}