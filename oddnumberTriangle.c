// i/p n=4
// o/p 
// 1 
// 1 3 
// 1 3 5
// 1 3 5 7
#include<stdio.h>
int main()
{
    int n,i,j,a;
    printf("\n enter the number of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   a=1;
        for(j=1;j<=i;j++)
        {   
            printf("%d ",a);
            a+=2;
        }
        printf("\n");
    }
    
}