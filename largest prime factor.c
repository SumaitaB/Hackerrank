#include<stdio.h>
int main()
{
    int t,i;
    long long int n,p,max=-9999999,j,k,x=0,h=0,u;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        long long int arr[100]={0};
        h=0,x=0,p=0,max=-9999999;
        scanf("%lld",&n);
        for(j=1;j<=n; j++)
        {
            if(n%j==0)
            {
                x=0;

                for(k=1; k<=j; k++)
                {
                    p=j%k;
                    if(p==0)
                    {
                    x++;
                    }
                }
                    if(x==2)
                    {

                        arr[h]=j;
                        h++;

                    }

            }

        }
        for(u=0;u<100;u++)
        {
            if(max<arr[u])
            {
                max=arr[u];
            }
        }
        printf("%lld\n",max);
    }

    return 0;
}
