#include <stdio.h>
int main()
{
   int n,i,s=0;
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
       s+=a[i];
   }
   printf("%d\n",s);
    return 0;
}
