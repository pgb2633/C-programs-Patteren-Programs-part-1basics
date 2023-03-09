// i/p n=4
// o/p 
// 1 2 3 4
// 1 2 3
// 1 2 
// 1
#include<stdio.h>
int main()
{
    int n,i,j,a;
    printf("Enter the number of rows");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {   a=(n+1)-i;
        for(j=1;j<=a;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
