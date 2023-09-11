#include<stdio.h>
int main()
{
    int n,i,sum=0,r=0;
    scanf("%d",&n);

        while(n!=0)
        {
            r=n%10;
            sum+=r;
            n=n/10;
        }
        printf("%d\n",sum);


return 0;
}
