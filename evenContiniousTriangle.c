// i/p n=4
// o/p 

// 2 
// 4  6
// 8  10 12
// 14 16 18

#include<stdio.h>
int main()
{
    int a=2,n,i,j;
    printf("\n enter the number of rows");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf("%d ",a);
            a+=2;
        }
        printf("\n");
    }

}
