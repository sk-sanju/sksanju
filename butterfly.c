#include <stdio.h>
int main()
{
    int i, j, n = 9, m = 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j <= m || j > n - m)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        if (i >= (n - 1) / 2 + 1)
        {
            m--;
        }
        else
        {
            m++;
        }
    }
    return 0;
}
