#include <stdio.h>
int function(int a[],int max)
{
    int i;
    max=-999999;
    for(i=0; i<4; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}

int main()
{
    int x,b[4],j;
      for(j=0; j<4; j++)
    {
        scanf("%d",&b[j]);
    }
    x = function(b,x);
    printf("%d\n",x);
    return 0;
}
