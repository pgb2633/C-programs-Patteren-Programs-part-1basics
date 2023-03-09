// i/p n=4
// o/p

// 2
// 2 4
// 2 4 6
// 2 4 6 8

#include <stdio.h>
int main()
{
    int a, n, i, j;
    printf("\n Enter the number of rows");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        a = 2;
        for (j = 1; j <= i; j++)
        {
            printf("%d ", a);
            a += 2;
        }
        printf("\n");
    }
}
