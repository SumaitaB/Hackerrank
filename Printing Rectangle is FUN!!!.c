#include<stdio.h>
int main()
{
    int i,j,l,b;
    scanf("%d",&l);
    scanf("%d",&b);
    for(i=1;i<=l;i++)
    {
        for(j=1;j<=b;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
