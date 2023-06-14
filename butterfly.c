#include <stdio.h>

int main()
{
    int i,j,n,s;
    printf("enter limit: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=-n;j<=n;j++){
            if(j>-n+i&&j<n-i&&i!=n)
                printf("  ");
            else
            printf("* ");
        }
        printf("\n");
    }
    for(i=0;i<=n;i++){
        for(j=-n;j<=n;j++){
            if(j>-i&&j<i)
                printf("  ");
            else
                printf("* ");
        }
        printf("\n");
    }
    return 0;
}
