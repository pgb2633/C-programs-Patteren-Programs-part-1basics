// i/p
//    n=4
// o/p
//     *
//     * *
//     * * *
//     * * * *

#include <stdio.h>
int main()
{
    int n, i, j;
    printf("\n Enter The Number");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
