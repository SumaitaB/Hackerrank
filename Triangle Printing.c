#include<stdio.h>
int main()
{
    int t,l,i,j,k,p=1,q=1,n,sp,m;
    scanf("%d",&t);
for(l=1;l<=t;l++)
{
    sp=0;
    q=1;
   scanf("%d",&n);
   sp=n-1;
    for(i=1; i<=n; i++)
    {
        for(m=sp;m>=1;m--)
        {
        printf(" ");
        }
        sp--;
        for(k=1; k<=q; k++)
        {
            printf("%d",k);
        }
        printf("\n");
        q++;
    }
    printf("\n");
}

    return 0;
}
