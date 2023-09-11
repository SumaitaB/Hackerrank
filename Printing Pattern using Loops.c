#include<stdio.h>
int main()
{
    int n,i,p,j,k,x,m,n1,c,s,e=3;
    scanf("%d",&n);
    p=n;
    x=n*2-e;
    m=1;
    c=1;
    n1=n;
    for(i=1; i<=2*n-1; i++)
    {
        if(i<=n)
        {
            x=n*2-e;
            n1=n;
            for(k=1; k<=m; k++)
            {
                printf("%d ",n1);
                n1--;
            }
            for(j=1; j<=x; j++)
            {

                printf("%d ",p);

            }

            p--;
            e=e+2;

            for(k=1; k<=m; k++)
            {
                if(n1==0)
                {

                }
                else
                {
                    printf("%d ",n1+1);
                }
                n1++;
            }
            m++;
            printf("\n");

        }
        //*****************************************
        else
        {
            if(p==0)
            {
                p=2;
            }
            if(x==-1)
            {
                x=1;
            }
            if(m==n+1)
            {
                m=n-1;
            }

            x=x+2;
            n1=n;
            for(k=1; k<m; k++)
            {
                printf("%d ",n1);
                n1--;
            }
            for(j=1; j<=x; j++)
            {

                printf("%d ",p);

            }

            p++;
            for(k=1; k<m; k++)
            {
                if(n1==0)
                {

                }
                else
                {
                    printf("%d ",n1+1);
                }
                n1++;
            }
            m--;
            printf("\n");

        }

    }
    return 0;
}
