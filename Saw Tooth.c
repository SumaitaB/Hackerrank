#include<stdio.h>
int main()
{
    int i,j,k,q=1,n,t,l,sp,m,h,o=1,g;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        o=1;
        scanf("%d",&n);
        printf("Case %d:\n",i);
        sp=n;
        for(j=1; j<=n; j++)
        {
            g=j;
             for(m=1; m<=o; m++)
        {

            for(k=1; k<=g; k++)
            {
                printf("*");
            }
            for(l=sp;l>=1;l--)
            {
                printf(" ");
            }
            g--;
        }
        o++;
        sp--;
        printf("\n");
        }
        printf("\n");

    }
    return 0;
}
