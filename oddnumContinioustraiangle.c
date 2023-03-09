// i/p n=4
// o/p

// 1
// 3  5
// 7  9  11
// 13 15 17
#include <stdio.h>
int main()
{
    int n, i, j, a;
    printf("Enter the number of rows");
    scanf("%d", &n);
    a = 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", a);
            a += 2;
        }
        printf("\n");
    }
}