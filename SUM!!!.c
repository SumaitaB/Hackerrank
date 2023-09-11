#include<stdio.h>
int main()
{
    long long int l,r,i,j,sum=0;
    double x=0;
    scanf("%lld%lld",&l,&r);
    for(i=l; i<=r; i++)
    {
       sum+=i;

    }
    printf("%lld\n",sum);
    return 0;
}
