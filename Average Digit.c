#include<stdio.h>
int main()
{
    long long int n,r,j,count=0;
    int t,i;
    double x=0;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld",&n);
        if(n==0)
        {
            printf("Case %d: %.2lf\n",i,n);
        }
        else
        {
            count=0;
            r=0;
            x=0;

            while(n!=0)
            {

                r=n%10;
                x+=r;
                n=n/10;
                count++;

            }
            x=x/(count*1.00);
            printf("Case %d: %.2lf\n",i,x);
        }
    }
    return 0;
}
